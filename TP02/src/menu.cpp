#include "../main.h"
#include "menu.h"

/**
 * Afficher le menu et demander à l'utilisateur de choisir une option
 */
void menu() {
    std::string choice;

    std::cout << std::endl << "Saisir votre choix :" << std::endl;
    std::cin >> choice;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    if (isNumber(choice)) {
        switch (stoi(choice)) {
            case 1:
                std::cout << std::endl << "Exercice 1" << std::endl << std::endl;
                pointersInit();
                break;
            case 2:
                std::cout << std::endl << "Exercice 2" << std::endl << std::endl;
                TP2_2();
                break;
            case 3:
                std::cout << std::endl << "Exercice 3" << std::endl << std::endl;
                TP2_3();
                break;
            case 0:
                std::cout << std::endl << "Au revoir!" << std::endl;
                break;
            default:
                std::cout << "Choix invalide" << std::endl;
                menu();
        }
    } else {
        std::cout << "Choix invalide" << std::endl;
        menu();
    }
}

/**
 * Afficher le menu
 */
void displayMenu() {
    std::cout << "Liste des exercices" << std::endl << std::endl;
    for (int i = 1; i <= 3; i++) {
        std::cout << std::to_string(i)+". Exercice "+std::to_string(i) << std::endl;
    }
    std::cout << std::endl << "0. Quitter" << std::endl;

    menu();
}
