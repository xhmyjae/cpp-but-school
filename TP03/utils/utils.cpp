#include "utils.h"
#include "../main.h"

/**
 * Prends une string, renvoie vrai si la string est un nombre, faux sinon
 *
 * @param str la string a verifier
 * @return Une valeur booleenne.
 */
bool isNumber(std::string str){
    for (int i = 0; i < str.length(); i++) {
        if (i==0 && str[i]=='-') {
            continue;
        } else {
            if (!isdigit(str[i]))
                return false;
        }
    }
    return true;
}

/**
 * Si l'utilisateur repond "o", renvoie vrai, sinon renvoie faux
 *
 * @return Une valeur booleenne.
 */
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

    while (!isNumber(number)) {
        std::cout << "Choix invalide" << std::endl;
        std::cin >> number;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    return stoi(number);
}

char inputString() {
    char str;
    std::cout << "Entrer un nom :" << std::endl;
    std::cin >> str;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return str;
}