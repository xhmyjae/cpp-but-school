#include "utils.h"

/**
 * Prends une string, renvoie vrai si la string est un nombre, faux sinon
 *
 * @param str la string a verifier
 * @return Une valeur booleenne.
 */
bool isNumber(std::string str) {
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
