#include "../include/RobotController.h"
#include <iostream>
#include <thread>
#include <chrono>

RobotController::RobotController() {}
RobotController::~RobotController() {}

void RobotController::simulateRobot() {
    int speed;

    while (true) {
        std::cout << "Введите команду для робота (w - вперёд, s - назад, a - влево, d - вправо, x - остановить, q - выход): ";
        char command;
        std::cin >> command;

        if (command == 'q') {
            std::cout << "Завершение программы." << std::endl;
            break;
        }

        if (command == 'x') {
            motor.stop();  
        } else {
            std::cout << "Введите скорость (0-100): ";
            std::cin >> speed;
            if (speed < 0 || speed > 100) {
                std::cout << "Неверная скорость, пожалуйста, введите значение от 0 до 100." << std::endl;
                continue;
            }

            switch (command) {
                case 'w':
                    motor.changeSpeedSmoothly(speed);
                    motor.moveForward(speed);  
                    break;
                case 's':
                    motor.changeSpeedSmoothly(speed);
                    motor.moveBackward(speed);
                    break;
                case 'a':
                    motor.changeSpeedSmoothly(speed);
                    motor.turnLeft(speed);
                    break;
                case 'd':
                    motor.changeSpeedSmoothly(speed);
                    motor.turnRight(speed);
                    break;
                default:
                    std::cout << "Неверная команда. Попробуйте снова." << std::endl;
            }
        }

        // Задержка для симуляции движения
        std::this_thread::sleep_for(std::chrono::seconds(2));
        motor.stop();
    }
}