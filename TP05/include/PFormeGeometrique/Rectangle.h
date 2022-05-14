#ifndef TP05_RECTANGLE_H
#define TP05_RECTANGLE_H

#include <iostream>
#include "AFormeGeometrique.h"
#include "../ex02.h"

namespace PFormeGeometrique {
    class Rectangle : public AFormeGeometrique {
        protected:
            double largeur;
            double longueur;
        public:
            Rectangle(std::string nom, double largeur, double longueur) : AFormeGeometrique(nom), largeur(largeur), longueur(longueur) {};
            double perimetre() const;
            void affichage() const;
            double surface() const;
            ~Rectangle() { DEBUG(" ~IFormeGeometrique() "); }
    };
};

#endif //TP05_RECTANGLE_H
