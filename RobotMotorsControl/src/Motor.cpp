#include "../include/Motor.h"
#include <iostream>
#include "Motor.h"

Motor::Motor(){}
Motor::~Motor(){}

void Motor::moveForward(int speed)
{
    std::cout << "Двигатели вращаются вперёд со скоростью: " << speed << std::endl;
}

void Motor::moveBackward(int speed)
{
    std::cout << "Двигатели вращаются назад со скоростью: " << speed << std::endl;
}

void Motor::turnLeft(int speed)
{
    std::cout << "Робот поворачивает влево со скоростью: " << speed << std::endl;
}

void Motor::turnRight(int speed)
{
    std::cout << "Робот поворачивает вправо со скоростью: " << speed << std::endl;
}

void Motor::stop()
{
    std::cout << "Двигатели остановлены." << std::endl;
}

void Motor::changeSpeedSmoothly(int targetSpeed)
{
    int step = (targetSpeed > currentSpeed) ? 1 : -1;
    while (currentSpeed != targetSpeed)
    {
        currentSpeed +=step;
        std::cout << "Текущая скорость: " << currentSpeed << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
    
}
