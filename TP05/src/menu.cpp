#include "../main.h"
#include "../include/menu.h"

/**
 * Affiche le menu
 */
void Menu::displayMenu() {
    std::cout << "Liste des exercices" << std::endl << std::endl;
    for (int i = 1; i <= 2; i++) {
        std::cout << std::to_string(i)+". Exercice "+std::to_string(i) << std::endl;
    }
    std::cout << std::endl << "0. Quitter" << std::endl;
}

/**
 * Demande a l'utilisateur d'entrer un nombre et le renvoie
 *
 * @param message Le message a afficher a l'utilisateur.
 * @return un nombre entier.
 */
int Menu::get_number(const std::string &message) {
    std::cout << message << std::endl;
    double number;
    std::cout << ">";
    std::cin >> number;
    while (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Choix invalide" << std::endl;
        std::cin >> number;
    }
    int number2 = int(number);
    return number2;
}

/**
 * Demande a l'utilisateur s'il veut continuer et renvoie vrai s'il le fait, faux sinon
 *
 * @return Une valeur booléenne.
 */
bool Menu::ask_continue() {
    char choice;
    std::cout << "Voulez-vous continuer ? (o/n)" << std::endl;
    std::cin >> choice;
    if (choice == 'o') {
        return true;
    } else {
        std::cout << "Au revoir!" << std::endl;
        return false;
    }
}

/**
 * Affiche un menu, demande a l'utilisateur de choisir une option, execute la fonction correspondante, et demande a
 * l'utilisateur s'il veut continuer
 */
void Menu::execute() {
    int choice;
    do {
        Menu::displayMenu();
        choice = Menu::get_number("Saisir votre choix :");
        switch (choice) {
            case 0:
                std::cout << "Au revoir!" << std::endl;
                break;
            case 1:
                std::cout << "Exercice 1" << std::endl;
                ex01();
                break;
            case 2:
                std::cout << "Exercice 2" << std::endl;
                ex02();
                break;
            default:
                std::cout << "Choix invalide" << std::endl;
        }
    } while (Menu::ask_continue());
}
