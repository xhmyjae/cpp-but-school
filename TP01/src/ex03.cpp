#include "ex03.h"
#include "ex02.h"
#include "../main.h"

bool isStrongNumber(int number) {
    int sum = 0;
    int temp = number;
    while (temp > 0) {
        sum += factorial(temp % 10);
        temp /= 10;
    }
    return sum == number;
}

void strongNumber() {
    std::string number;
    std::cout << "Entrer un nombre : " << std::endl;
    std::cin >> number;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    if (isNumber(number)) {
        if (isStrongNumber(stoi(number))) {
            std::cout << "Le nombre " << number << " est un nombre fort." << std::endl;
        } else {
            std::cout << "Le nombre " << number << " n'est pas un nombre fort." << std::endl;
        }
    } else {
        std::cout << "Vous n'avez pas entre un nombre" << std::endl;
        strongNumber();
    }
}
