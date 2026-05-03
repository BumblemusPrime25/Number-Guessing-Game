#include <iostream>
#include <random>
#include "./baseLevel.h"

int main() {
    std::random_device rd;

    std::mt19937 gen(rd());

    //Define max range of level diff when up to that
    std::uniform_int_distribution<> dister(1, 100);

    int randNum = dister(gen);

    std::cout << "Random num = " << randNum << std::endl;

    BaseLevel* game = new BaseLevel();

    game->guessLogic(randNum);

    return 0;
}