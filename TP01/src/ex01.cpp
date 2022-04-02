#include "ex01.h"
#include "../main.h"

void evenNumbersFor() {
    std::string number;
    std::cout << "Entrer un nombre: " << std::endl;
    std::cout << "> ";
    std::cin >> number;

    if (isNumber(number)) {
        std::cout << std::endl << "Les nombres pairs de 1 a " + number + " sont : ";

        for (int i = 1; i <= stoi(number); i++) {
            if (i % 2 == 0) {
                std::cout << i << " ";
            }
        }
        int sum = sumEvenNumbersFor(stoi(number));
        std::cout << std::endl << "La somme des nombres pairs de 1 a " + std::to_string(sum) + " est : " + std::to_string(sum);
        if (tryAgain()) {
            ex01MenuDisplay();
        } else {
            displayMenu();
        }
    } else {
        std::cout << "Vous n'avez pas entre un nombre" << std::endl;
        evenNumbersFor();
    }
}

int sumEvenNumbersFor(int number) {
    int sum = 0;

    for (int i = 1; i <= number; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }
    return sum;
}

void evenNumbersWhile() {
    std::string number;
    std::cout << "Entrer un nombre: " << std::endl;
    std::cout << "> ";
    std::cin >> number;

    if (isNumber(number)) {
        std::cout << std::endl << "Les nombres pairs de 1 a " + number + " sont : ";

        int i = 1;
        while (i <= stoi(number)) {
            if (i % 2 == 0) {
                std::cout << i << " ";
            }
            i++;
        }
        int sum = sumEvenNumbersWhile(stoi(number));
        std::cout << std::endl << "La somme des nombres pairs de 1 a " + std::to_string(sum) + " est : " + std::to_string(sum);
        if (tryAgain()) {
            ex01MenuDisplay();
        } else {
            displayMenu();
        }
    } else {
        std::cout << "Vous n'avez pas entre un nombre" << std::endl;
        evenNumbersWhile();
    }
}

int sumEvenNumbersWhile(int number) {
    int sum = 0;

    int i = 1;
    while (i <= number) {
        if (i % 2 == 0) {
            sum += i;
        }
        i++;
    }

    return sum;
}

void ex01Menu() {
    std::string choice;

    std::cout << std::endl << "Saisir votre choix :" << std::endl;
    std::cin >> choice;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    if (isNumber(choice)) {
        switch (stoi(choice)) {
            case 1:
                evenNumbersFor();
                break;
            case 2:
                evenNumbersWhile();
                break;
            default:
                std::cout << "Vous n'avez pas entre un nombre valide" << std::endl;
                ex01Menu();
                break;
        }
    } else {
        std::cout << "Vous n'avez pas entre un nombre" << std::endl;
        ex01Menu();
    }
}

void ex01MenuDisplay() {
    std::cout << "Version de l'exercice a executer :" << std::endl;
    std::cout << "1. Version utilisant for" << std::endl;
    std::cout << "2. Version utilisant while" << std::endl;
    std::cout << "0. Quitter" << std::endl;

    ex01Menu();
}
