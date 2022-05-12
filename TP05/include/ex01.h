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
    protected:
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
        int grades[10];
    public:
        Etudiant(int const& numero, std::string const& nom, Sexe sexe): Personne(numero, nom, sexe) {};
        void rentrerNote();
        void afficherNote();
        float getAverage();
        int getMin();
        int getMax();
    };
}

#endif //TP04_EX01_H
