#include "ex01.h"
#include "../main.h"
#define max(x, y) [a = x, b = y](){ if (a<b) return b; else return a; }()

/**
 * Print le nom du fichier et le numero de ligne ou il est appele
 */
void macro() {
    std::cout << "Fichier :" << __FILE__  << std::endl;
    std::cout << "Ligne :" << __LINE__ << std::endl;
}

/**
 * La fonction max() renvoie le plus grand de deux nombres input via une macro predefinie.
 */
void getHighest() {
    int a = inputNumber();
    int b = inputNumber();
    std::cout << "Le maximum entre 12 et 17 : " << max(12, 17) << std::endl;
    std::cout << "Le maximum entre " << a << " et " << b << " : " << max(a, b);
}

/**
 * Appelle la fonction macro et getHighest, puis tryAgain pour rejouer ou non
 */
void ex01() {
    macro();
    getHighest();
    if (tryAgain()) {
        ex01();
    } else {
        displayMenu();
    }
}
