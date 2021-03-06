#include "ex02.h"
#include "../main.h"

/**
 * Renvoie la factorielle de n
 *
 * @param n Le nombre dont on veut obtenir la factorielle.
 * @return La factorielle de n.
 */
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

/**
 * Afficher la factorielle d'un nombre
 */
void factorialDisplay() {
    std::string number;
    std::cout << "Entrer un nombre : " << std::endl;
    std::cin >> number;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    if (isNumber(number)) {
        if (stoi(number) < 0) {
            std::cout << "Le nombre doit etre positif" << std::endl;
            factorialDisplay();
        } else {
            int fact = factorial(stoi(number));
            std::cout << "Le resultat est : " << fact << std::endl;
            if (tryAgain()) {
                factorialDisplay();
            } else {
                displayMenu();
            }
        }
    } else {
        std::cout << "Vous n'avez pas entre un nombre" << std::endl;
        factorialDisplay();
    }
}
