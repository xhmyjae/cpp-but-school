#include "ex05.h"
#include "../main.h"

void mysteryNumberDisplay() {
    std::string mysteryNum;
    std::cout << "Entrer un nombre : " << std::endl;
    std::cin >> mysteryNum;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    if (isNumber(mysteryNum)) {
        std::cout << "Le nombre a trouver est compris entre -" << mysteryNum << " et " << mysteryNum << std::endl;
        mysteryNumber(-stoi(mysteryNum), stoi(mysteryNum));
    } else {
        std::cout << "Vous n'avez pas entre un nombre" << std::endl;
        mysteryNumberDisplay();
    }
}

void mysteryNumber(int negNum, int posNum) {
    int randNum = rand()%(posNum - negNum + 1) + negNum;
    int tries;

   int number = inputNumber();

    if (randNum != number) {
        tries = 1;
        while (randNum != number) {
            if (randNum > number) {
                std::cout << "Le nombre a trouver est plus grand" << std::endl;
            } else {
                std::cout << "Le nombre a trouver est plus petit" << std::endl;
            }
            number = inputNumber();
            tries++;
        }
        std::cout << "Bravo, vous avez trouve le nombre en " << tries << " essais" << std::endl;
        if (tryAgain()) {
            mysteryNumberDisplay();
        } else {
            displayMenu();
        }
    } else {
        std::cout << "Bravo, vous avez trouve le nombre en 1 essai" << std::endl;
        if (tryAgain()) {
            mysteryNumberDisplay();
        } else {
            displayMenu();
        }
    }

}

int inputNumber() {
    std::string number;
    std::cout << "Entrer un nombre :" << std::endl;
    std::cin >> number;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    while (!isNumber(number) || !isGrade(stoi(number), -stoi(number), stoi(number))) {
        std::cout << "Choix invalide" << std::endl;
        std::cin >> number;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    return stoi(number);
}
