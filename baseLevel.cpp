#include <iostream>
#include "./baseLevel.h"

BaseLevel::BaseLevel() {
    guesses = 10;
    maxNum = 101;
    randNum = rand() % maxNum;
    guess = 0;
}

void guessLogic() {}