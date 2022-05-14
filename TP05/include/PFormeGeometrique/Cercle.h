#ifndef TP05_CERCLE_H
#define TP05_CERCLE_H

#include <iostream>
#include <numbers>
#include "AFormeGeometrique.h"
#include "../ex02.h"

namespace PFormeGeometrique {
    class Cercle : public AFormeGeometrique {
        private:
            double rayon;
        public:
            Cercle(std::string nom, double rayon) : AFormeGeometrique(nom), rayon(rayon) {};
            double perimetre() const;
            void affichage() const;
            double surface() const;
            ~Cercle() { DEBUG(" ~IFormeGeometrique() "); }
    };
};

#endif //TP05_CERCLE_H
