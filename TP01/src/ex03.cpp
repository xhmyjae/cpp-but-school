#include "ex03.h"
#include "ex02.h"
#include "../main.h"

/**
 * Prends un nombre, renvoie vrai si la somme de la factorielle de chaque chiffre est egale au nombre
 *
 * @param number Le nombre a verifier.
 * @return Une valeur booleenne.
 */
bool isStrongNumber(int number) {
    int sum = 0;
    int temp = number;
    while (temp > 0) {
        sum += factorial(temp % 10);
        temp /= 10;
    }
    return sum == number;
}

/**
 * Verifie si le nombre entre par l'utilisateur est un nombre fort. Si c'est le cas, la fonction affiche le nombre.
 */
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
        if (tryAgain()) {
            strongNumber();
        } else {
            displayMenu();
        }
    } else {
        std::cout << "Vous n'avez pas entre un nombre" << std::endl;
        strongNumber();
    }
}
