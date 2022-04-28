#include "ex02.h"
#include <iostream>

typedef double* ptrDouble;

/**
 * Creer un nouveau tableau de doubles de taille 'taille' et stocke l'adresse du premier element du tableau dans la
 * variable 'dd'
 *
 * @param dd un pointeur vers un double
 * @param taille la taille du tableau
 */
void constructeur_tableau(ptrDouble &dd, const unsigned& taille) {
    dd = new double[taille];
}

/**
 * Imprime le contenu d'un double tableau
 *
 * @param dd un pointeur vers un double
 * @param taille la taille du tableau
 */
void afficher_tableau (const ptrDouble &dd, const unsigned& taille) {
    for (unsigned i = 0; i < taille; i++) {
        std::cout << dd[i] << std::endl;
    }
}

/**
 * {Prend} un pointeur vers un double, une taille, un index et une valeur, et modifie la valeur a l'index dans le
 * tableau pointe par le pointeur
 *
 * @param dd un pointeur vers un double
 * @param taille la taille du tableau
 * @param index l'index de l'élément à modifier
 * @param valeur la valeur à affecter à l'élément a l'indice
 */
void modifier_tableau (ptrDouble const &dd, const unsigned& taille, const unsigned& index, const double& valeur) {
    dd[index] = valeur;
}

/**
 * Supprime le tableau pointé par le pointeur passe en argument
 *
 * @param dd le pointeur vers le tableau
 */
void destructeur_tableau (ptrDouble &dd) {
    dd = nullptr;
    delete[] dd;
}

const double& get_tableau(const ptrDouble &dd, const unsigned& taille, const unsigned& index) {
    return dd[index];
}

double& get_tableau(ptrDouble &dd, const unsigned& taille, const unsigned& index) {
    return dd[index];
}

/**
 * Cree un tableau de 5 doubles, modifie le troisième élément, imprime le troisieme élément, modifie le troisieme
 * element, imprime le tableau, puis detruit le tableau
 */
void TP2_2() {
    ptrDouble d1 = nullptr;
    unsigned t1=5;
    constructeur_tableau(d1,t1);
    afficher_tableau(d1,t1);
    modifier_tableau(d1,t1,2, 3.13589985);
    afficher_tableau(d1,t1);
    std::cout<< get_tableau(d1,t1,2) << std:: endl;
    get_tableau(d1,t1,2) = 62.1;
    std::cout<< get_tableau(d1,t1,2) << std:: endl;
    afficher_tableau(d1,t1);
    destructeur_tableau(d1);
    afficher_tableau(d1,t1);
}