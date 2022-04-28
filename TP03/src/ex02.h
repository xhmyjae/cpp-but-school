#include <string.h>

#ifndef TP02_EX02_H
#define TP02_EX02_H

enum Sexe {INCONNUE=0, MASCULIN=1, FEMININ=2};

struct Personne {
    int numero;
    char * nom;
    Sexe sexe;
};

#endif //TP02_EX02_H
