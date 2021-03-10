#include <string>
#include <math.h>
#include <iostream>

const int MAX_LENGTH = 8, MAX_DIGIT = 4, MIN_DIGIT = 1, BASE = 10;

namespace ariel
{
    std::string snowman(int num);
    bool isLegal(int num);
    bool validLength(int num);
    bool inRange(int num);
};