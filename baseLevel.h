#ifndef BASELEVEL_H
#define BASELEVEL_H

class BaseLevel {
    public:
        int guesses;
        int maxNum;
        int guess;
        BaseLevel();
        void guessLogic(int randNum);
};

#endif