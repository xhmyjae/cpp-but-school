#include "ex05.h"
#include "../main.h"

/**
 * Affiche une plage de nombres et demande à l'utilisateur de deviner le nombre
 */
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

/**
 * La fonction prend deux nombres, un nombre negatif et un nombre positif. Il genere ensuite un nombre aleatoire entre le
 * nombre negatif et le nombre positif. L'utilisateur est ensuite invite a deviner le nombre. Si la supposition de
 * l'utilisateur est erronee, l'utilisateur est invite a deviner à nouveau. Si l'estimation de l'utilisateur est correcte,
 * l'utilisateur est informe du nombre d'essais qu'il a fallu pour deviner le nombre
 *
 * @param negNum Le nombre le plus bas que le nombre mystere peut etre.
 * @param posNum Le nombre maximum que l'utilisateur peut deviner.
 */
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

/**
 * La fonction demande à l'utilisateur d'entrer un numero et vérifie si le numero est valide
 *
 * @return Le numero entre par l'utilisateur.
 */
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
