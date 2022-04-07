#include "ex01.h"
#include "../main.h"

/**
 * Cree un pointeur vers un entier, l'initialise, l'affiche, puis le supprime.
 */
void pointersInit() {
    auto pointer = new int;
    constructeur(pointer);
    affiche(pointer);
    destructeur(pointer);

    if (tryAgain()) {
        pointersInit();
    } else {
        displayMenu();
    }
}

/**
 * Prend un pointeur sur un entier et affiche l'adresse du pointeur et sa valeur
 *
 * @param pointer L'adresse du pointeur a afficher.
 */
void affiche(int* pointer) {
    std::cout << "adresse : " << pointer << std::endl;
    std::cout << "valeur : " << *pointer << std::endl;
}

/**
 * Prend un entier en entree et le stocke dans l'emplacement mémoire du pointeur.
 *
 * @param pointer L'adresse du pointeur a afficher.
 */
void constructeur(int* pointer) {
    *pointer = inputNumber();
}

/**
 * Prend un pointeur et le supprime
 *
 * @param pointer L'adresse du pointeur a afficher.
 */
void destructeur(int* pointer) {
    pointer = nullptr;
    delete pointer;
}

