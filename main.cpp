#include <iostream>
#include <random>
#include "./baseLevel.h"
#include "./easyLevel.h"
#include "./mediumLevel.h"

int main() {
    int choice;

    while (true) {
        std::cout << "1 - Easy, 2 - Medium, 3 - Hard. ENTER DIFFICULTY: ";
        std::cin >> choice;

        if (choice == 1 || choice == 2 || choice == 3) {
            break;
        } else {
            std::cout << "INVALID INPUT ENTER A NUMBER FROM 1 - 3" << std::endl;
        }
    }

    std::random_device rd;

    std::mt19937 gen(rd());

    BaseLevel* game = nullptr;

    switch (choice) {
        case 1:
            std::cout << "EASY DIFFICULTY ENGAGED" << std::endl;
            game = new EasyLevel();
        
        case 2:
            std::cout << "MEDIUM DIFFICULTY ENGAGED" << std::endl;
            game = new MediumLevel();

        case 3:
            std::cout << "HARD DIFFICULTY ENGAGED" << std::endl;

        default:
            std::cout << "INVALID INPUT" << std::endl;
    }

    //Define max range of level diff when up to that
    std::uniform_int_distribution<> dister(1, game->maxNum);

    int randNum = dister(gen);

    std::cout << "Random num = " << randNum << std::endl;

    game->guessLogic(randNum);

    return 0;
}