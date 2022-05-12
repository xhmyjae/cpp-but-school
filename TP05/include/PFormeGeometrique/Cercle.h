#ifndef TP05_CERCLE_H
#define TP05_CERCLE_H

#include <iostream>
#include <numbers>
#include "IFormeGeometrique.h"
#include "../ex02.h"

namespace PFormeGeometrique {
    class Cercle : public IFormeGeometrique {
        private:
            std::string nom;
            double rayon;
        public:
            Cercle(std::string, double);
            double perimetre() const;
            void affichage() const;
            std::string getNom() const;
            double surface() const;
            ~Cercle() { DEBUG(" ~IFormeGeometrique() "); }
    };
};

#endif //TP05_CERCLE_H
