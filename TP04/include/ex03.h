#ifndef TP02_EX03_H
#define TP02_EX03_H

#include <iostream>

namespace ex03NS {
    enum class Sexe {
        INCONNUE = 0,
        MASCULIN = 1,
        FEMININ = 2
    };

    class Personne {
    private:
        int numero;
        std::string nom;
        Sexe sexe;
    public:
        Personne(Personne&);
        Personne(int const&, std::string const&, Sexe);
        void const afficher();
        int const& getNumero();
        std::string const& getNom();
        Sexe getSexe();
        ~Personne();
    };
}

#endif //TP02_EX03_H
