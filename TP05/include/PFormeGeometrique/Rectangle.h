#ifndef TP05_RECTANGLE_H
#define TP05_RECTANGLE_H

#include <iostream>
#include "IFormeGeometrique.h"
#include "../ex02.h"

namespace PFormeGeometrique {
    class Rectangle : public IFormeGeometrique {
        private:
            std::string nom;
            double largeur;
            double longueur;
        public:
            Rectangle(std::string, double, double);
            double perimetre() const;
            void affichage() const;
            std::string getNom() const;
            double surface() const;
            ~Rectangle() { DEBUG(" ~IFormeGeometrique() "); }
    };
};

#endif //TP05_RECTANGLE_H
