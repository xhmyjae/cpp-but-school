#ifndef TP04_EX01_H
#define TP04_EX01_H

#include <iostream>

namespace ex01NS {
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

    class Etudiant : public Personne {
    private:
        int * grades;
    public:
        Etudiant(int const&, std::string const&, Sexe, int*);
        void afficherNote(int[10]);
        float getAverage(int*, int);
        int getMin(int*, int);
        int getMax(int*, int);
    };
}

#endif //TP04_EX01_H
