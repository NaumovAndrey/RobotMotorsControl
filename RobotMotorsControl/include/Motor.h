#pragma once

class Motor
{
private:
    
public:
    Motor();
    ~Motor();

    void moveForward(int speed);
    void moveBackward(int speed);
    void turnLeft(int speed);
    void turnRight(int speed);
    void stop();

    void changeSpeedSmoothly(int targetSpeed);
};