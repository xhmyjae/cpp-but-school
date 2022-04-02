#include "utils.h"
#include "../main.h"

bool isNumber(std::string str){
    for (int i = 0; i < str.length(); i++) {
        if (i==0 && str[i]=='-') continue;
        if (isdigit(str[i]) == false)
            return false;
    }
    return true;
}

bool isGrade(int number, int min, int max){
    if (number < min || number > max)
        return false;
    return true;
}

bool tryAgain() {
    std::string answer;
    std::cout << std::endl << "Voulez vous rejouer ? (o/n)" << std::endl;
    std::cin >> answer;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    while (answer != "o" && answer != "n") {
        std::cout << "Choix invalide" << std::endl;
        std::cin >> answer;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    if (answer == "o") {
        return true;
    } else {
        return false;
    }
}
