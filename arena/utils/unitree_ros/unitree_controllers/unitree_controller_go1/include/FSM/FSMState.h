/**********************************************************************
 Copyright (c) 2020-2023, Unitree Robotics.Co.Ltd. All rights reserved.
***********************************************************************/
#ifndef FSMSTATE_H
#define FSMSTATE_H

#include <string>
#include <iostream>
#include <unistd.h>
#include "control/CtrlComponents.hpp"
#include "message/LowlevelCmd.hpp"
#include "message/LowlevelState.hpp"
#include "common/enumClass.hpp"
#include "common/mathTools.hpp"
#include "common/mathTypes.hpp"
#include "common/timeMarker.hpp"
#include "interface/CmdPanel.hpp"

class FSMState{
public:
    FSMState(CtrlComponents *ctrlComp, FSMStateName stateName, std::string stateNameString);

    virtual void enter() = 0;
    virtual void run() = 0;
    virtual void exit() = 0;
    virtual FSMStateName checkChange() {return FSMStateName::INVALID;}
    FSMStateName checkChangeOverride(FSMStateName targetState) {

        if(targetState == FSMStateName::INVALID)
            return checkChange();

        if(_stateName == targetState)
            return targetState;

        if(_stateName == FSMStateName::FIXEDSTAND && isReached())
            return targetState;
        
        return FSMStateName::FIXEDSTAND;
    }

    FSMStateName _stateName;
    std::string _stateNameString;
protected:
    CtrlComponents *_ctrlComp;
    FSMStateName _nextStateName;

    LowlevelCmd *_lowCmd;
    LowlevelState *_lowState;
    UserValue _userValue;

    virtual bool isReached(){return false;}
};

#endif  // FSMSTATE_H