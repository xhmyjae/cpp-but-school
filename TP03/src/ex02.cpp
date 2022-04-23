#include "ex02.h"
#include "../main.h"
#include <cstring>

enum Sexe {INCONNUE=0, MASCULIN=1, FEMININ=2};

struct Personne {
    int numero;
    char * nom[10];
    Sexe sexe;
};

Personne * creer_personne(int numero, char * nom, Sexe sexe) {
    Personne * p = new Personne;
    p->numero = numero;
    strcpy(p->nom, nom);
    p->sexe = sexe;
    return p;
}

void detruire_personne(Personne * p) {
    p = nullptr;
    delete p;
}

Personne * initialiser_personne(Personne * p) {
    p->numero = inputNumber();
    p->nom = inputString();
    int sexe = inputNumber();
    switch(sexe) {
        case 1:
            p->sexe = MASCULIN;
            break;
        case 2:
            p->sexe = FEMININ;
            break;
        default:
            p->sexe = INCONNUE;
            break;
    }
    return p;
}

void afficher_personne(Personne * p) {
    std::cout << "Numero : " << p->numero << std::endl;
    std::cout << "Nom : " << p->nom << std::endl;
    std::cout << "Sexe : " << p->sexe << std::endl;
}

char * nom_personne(Personne * p) {
    return p->nom;
}

Sexe sexe_personne(Personne * p) {
    return p->sexe;
}

int numero_personne(Personne * p) {
    return p->numero;
}

void Test_Function() {

    if(tryAgain()) {
        Test_Function();
    } else {
        displayMenu();
    }
}
