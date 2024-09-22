#include "../include/Motor.h"

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
