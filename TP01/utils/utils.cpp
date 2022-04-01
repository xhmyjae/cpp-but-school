#include "utils.h"
#include "../main.h"

bool isNumber(std::string str){
    for (int i = 0; i < str.length(); i++) {
        if (isdigit(str[i]) == false)
            return false;
    }
    return true;
}