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
        if (i==0 && str[i]=='-') continue;
        if (isdigit(str[i]) == false)
            return false;
    }
    return true;
}

/**
 * Si le nombre est compris entre le min et le max, retourne vrai, sinon retourne faux
 *
 * @param number Le nombre a verifier.
 * @param min la note minimale qu'un etudiant peut obtenir (inclusivement)
 * @param max La note maximale qu'un etudiant peut obtenir.
 * @return Une valeur booleenne.
 */
bool isGrade(int number, int min, int max){
    if (number < min || number > max)
        return false;
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
