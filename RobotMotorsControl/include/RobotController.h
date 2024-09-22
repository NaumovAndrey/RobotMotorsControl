#pragma once
#include "./Motor.h"

class RobotController
{
private:
    Motor motor;

public:
    RobotController();
    ~RobotController();

    void simulateRobot();
};