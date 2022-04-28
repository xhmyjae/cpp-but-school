#include "ex03.h"
#include "../../TP04/include/ex03.h"


typedef std::shared_ptr<double> ptrStdDouble;

/**
 * Cree un pointeur partage vers un double tableau de taille `taille`
 *
 * @param dd un pointeur vers un double
 * @param taille la taille du tableau
 */
void constructeur_tableau(ptrStdDouble &dd,const unsigned & taille) {
    dd = std::make_shared<double>(taille);
}

/**
 * Imprime le contenu d'un double tableau
 *
 * @param dd un pointeur vers un tableau double
 * @param taille la taille du tableau
 */
void afficher_tableau (const ptrStdDouble &dd, const unsigned& taille) {
    for (unsigned i = 0; i < taille; i++) {
        std::cout << dd.get()[i] << std::endl;
    }
}

/**
 * Prend un pointeur vers un double, une taille, un index et une valeur, et modifie le double à l'index donne a la
 * valeur donnee
 *
 * @param dd un pointeur vers un tableau double
 * @param taille la taille du tableau
 * @param index l'index de l'élément à modifier
 * @param valeur la valeur à affecter à l'élément du tableau
 */
void modifier_tableau (ptrStdDouble const &dd, const unsigned& taille, const unsigned& index, const double& valeur) {
    dd.get()[index] = valeur;
}

/**
 * Prend un pointeur vers un double et renvoie un pointeur vers un double
 *
 * @param dd le nom du pointeur vers le tableau
 */
void destructeur_tableau (ptrStdDouble &dd) {
    dd.reset();
}

const double& get_tableau(const ptrStdDouble &dd, const unsigned& taille, const unsigned& index) {
    return dd.get()[index];
}

double& get_tableau(ptrStdDouble &dd, const unsigned& taille, const unsigned& index) {
    return dd.get()[index];
}

/**
 * Cree un tableau de 5 doubles, l'affiche, modifie le troisieme element, l'affiche, recupere le troisieme element, le
 * modifie, l'affiche et detruit le tableau
 */
void TP2_3() {
    ptrStdDouble d1 = nullptr;
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
