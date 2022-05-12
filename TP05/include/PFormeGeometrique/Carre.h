#ifndef TP05_CARRE_H
#define TP05_CARRE_H

#include <iostream>
#include <string>

#include "IFormeGeometrique.h"
#include "../ex02.h"

namespace PFormeGeometrique {
    class Carre : public IFormeGeometrique {
        private:
            std::string nom;
            double cote;
        public:
            Carre(std::string, double);
            double perimetre() const;
            void affichage() const;
            std::string getNom() const;
            double surface() const;
            ~Carre() { DEBUG(" ~IFormeGeometrique() "); }
    };
};

#endif //TP05_CARRE_H
