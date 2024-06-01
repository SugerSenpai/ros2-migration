/**********************************************************************
 Copyright (c) 2020-2023, Unitree Robotics.Co.Ltd. All rights reserved.
***********************************************************************/
#ifndef KEYBOARD_H
#define KEYBOARD_H

#include <stdio.hpp>
#include <stdlib.hpp>
#include <sys/time.hpp>
#include <sys/types.hpp>
#include <unistd.hpp>
#include <fcntl.hpp>
#include <termios.hpp>
#include "interface/CmdPanel.hpp"
#include "common/mathTools.hpp"

class KeyBoard : public CmdPanel{
public:
    KeyBoard();
    ~KeyBoard();
private:
    static void* runKeyBoard(void *arg);
    void* run(void *arg);
    UserCommand checkCmd();
    void changeValue();

    pthread_t _tid;
    float sensitivityLeft = 0.05;
    float sensitivityRight = 0.05;
    struct termios _oldSettings, _newSettings;
    fd_set set;
    int res;
    int ret;
    char _c;
};

#endif  // KEYBOARD_H