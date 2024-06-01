/**********************************************************************
 Copyright (c) 2020-2023, Unitree Robotics.Co.Ltd. All rights reserved.
***********************************************************************/
#ifndef FSM_H
#define FSM_H

// FSM States
#include "FSM/FSMState.hpp"
#include "FSM/State_FixedStand.hpp"
#include "FSM/State_Passive.hpp"
#include "FSM/State_FreeStand.hpp"
#include "FSM/State_Trotting.hpp"
#include "FSM/State_BalanceTest.hpp"
#include "FSM/State_SwingTest.hpp"
#include "FSM/State_StepTest.hpp"
#include "FSM/State_Danger.hpp"
#include "common/enumClass.hpp"
#include "control/CtrlComponents.hpp"
#ifdef COMPILE_WITH_MOVE_BASE
#include "FSM/State_move_base.hpp"
#endif // COMPILE_WITH_MOVE_BASE

struct FSMStateList
{
    FSMState *invalid;
    State_Passive *passive;
    State_FixedStand *fixedStand;
    State_FreeStand *freeStand;
    State_Trotting *trotting;
    State_BalanceTest *balanceTest;
    State_SwingTest *swingTest;
    State_StepTest *stepTest;
    State_Danger *danger;
#ifdef COMPILE_WITH_MOVE_BASE
    State_move_base *moveBase;
#endif // COMPILE_WITH_MOVE_BASE

    void deletePtr()
    {
        delete invalid;
        delete passive;
        delete fixedStand;
        delete freeStand;
        delete trotting;
        delete balanceTest;
        delete swingTest;
        delete stepTest;
#ifdef COMPILE_WITH_MOVE_BASE
        delete moveBase;
#endif // COMPILE_WITH_MOVE_BASE
    }
};

class FSM
{
public:
    FSM(CtrlComponents *ctrlComp);
    ~FSM();
    void run();

private:
    void initialize();
    FSMState *getNextState(FSMStateName stateName);
    bool checkSafty();
    CtrlComponents *_ctrlComp;
    FSMState *_currentState;
    FSMState *_nextState;
    FSMStateName _targetState = FSMStateName::INVALID;
    FSMStateName _nextStateName;
    FSMStateList _stateList;
    FSMMode _mode;
    long long _startTime;
    long long _safetyTimeout = 0ll;
    int count;
};

#endif // FSM_H