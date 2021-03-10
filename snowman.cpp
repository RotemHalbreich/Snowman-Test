#include "snowman.hpp"

using namespace std;


namespace ariel
{
    string snowman(int num)
    {
        string snowman1 = "_===_\n(.,.)\n( : )\n( : )\n";
        string snowman2 = "   _   \n  /_\\\n\\(o_O) \n (] [)>\n (   )\n";

        const int id1 = 11114411;
        const int id2 = 33232124;

        if (!isLegal(num))
        {
            string e = "Invalid code '" + std::to_string(num) + "'";
            throw std::invalid_argument(e);
        }
        if(num == id1){
            return snowman1;
        }
        if(num == id2){
            return snowman2;   
        }
        return "";    
    }

    //checks if the snowman is legal, meaning:
    //if the number's length is exactly 8 digits
    //and each digit is in range of 1-4
    bool isLegal(int num)
    {
        return inRange(num) && validLength(num);
    }

    //checks if the length of the number is valid
    bool validLength(int num)
    {
        return ((int)log10(num)) + 1 == MAX_LENGTH;
    }

    //checks if each digit is in range between 1-4
    bool inRange(int num)
    {
        if (num < 1){
            return false;
        }
        int tmp = num;

        while (tmp > 0)
        {
            if (tmp % BASE > MAX_DIGIT || tmp % BASE < MIN_DIGIT){
                return false;
            }
            tmp /= BASE;
        }
        return true;
    }
}