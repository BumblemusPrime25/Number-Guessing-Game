#include <iostream>
#include "./baseLevel.h"

BaseLevel::BaseLevel() {
    guesses = 10;
    maxNum = 101;
    guess = 0;
}

void BaseLevel::guessLogic(int randNum) {
    std::cout << "You have " << guesses << " to guess a number between 1 and " << maxNum - 1 << std::endl;
    while (guesses > 0) {
        std::cout << "You have " << guesses << "left" << std::endl;
        std::cout << "Enter guess: ";
        std::cin >> guess;

        if (guess > randNum) {
            std::cout << "Lower" << std::endl;
        } else if (guess < randNum) {
            std::cout << "Higher" << std::endl;
        } else {
            std::cout << "CORRECT, " << randNum << std::endl;
            return;
        }

        guesses -= 1;
    }
    std::cout << "YOU LOSE - " << randNum << " - better luck next time" << std::endl;
}