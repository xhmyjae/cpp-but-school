#include "utils.h"
#include "../main.h"

bool isNumber(std::string str){
    for (int i = 0; i < str.length(); i++) {
        if (isdigit(str[i]) == false)
            return false;
    }
    return true;
}

bool isGrade(int number) {
    if (number < 0 || number > 20)
        return false;
    return true;
}