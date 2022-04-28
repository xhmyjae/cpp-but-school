#ifndef TP04_COULEURS_H
#define TP04_COULEURS_H

#include <iostream>

namespace ex01NS {
    enum class Couleur {
        PIQUE,
        COEUR,
        CARREAU,
        TREFLE
    };

    class Carte {
    private:
        Couleur couleur;
        std::string valeur;
    public:
        Carte(Couleur, std::string const&);
        Carte(Carte&);
        ~Carte();
        void setType(Couleur);
        void setValeur(std::string const&);
        void const afficher();
        bool const equal(Carte&);
        void affecter(Carte&);
        std::string const& getValeur();
    };
}

namespace ex02NS {
    enum class Couleur {
        PIQUE,
        COEUR,
        CARREAU,
        TREFLE
    };

    class Carte {
    private:
        Couleur couleur;
        std::string valeur;
    public:
        static inline unsigned NbCreation = 0;
        Carte(Couleur, std::string const&);
        Carte(Carte&);
        ~Carte();
        Carte& operator=(Carte&);
        bool const operator==(Carte&);
        bool const operator!=(Carte&);
        void setType(Couleur);
        void setValeur(std::string const&);
        std::string const& getValeur();
        void const afficher();

        static inline unsigned GetNbCreation();

        friend std::ostream& operator<<(std::ostream&, Carte&);
    };
}

#endif //TP04_COULEURS_H
