#include "ex03.h"

typedef std::shared_ptr<double> ptrStdDouble;

void constructeur_tableau(ptrStdDouble &dd,const unsigned & taille) {
    dd = std::make_shared<double>(taille);
}

void afficher_tableau (const ptrStdDouble &dd, const unsigned& taille) {
    for (unsigned i = 0; i < taille; i++) {
        std::cout << dd.get()[i] << std::endl;
    }
}

void modifier_tableau (ptrStdDouble const &dd, const unsigned& taille, const unsigned& index, const double& valeur) {
    dd.get()[index] = valeur;
}

void destructeur_tableau (ptrStdDouble &dd) {
    dd.reset();
}

const double& get_tableau(const ptrStdDouble &dd, const unsigned& taille, const unsigned& index) {
    return dd.get()[index];
}

double& get_tableau(ptrStdDouble &dd, const unsigned& taille, const unsigned& index) {
    return dd.get()[index];
}

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
