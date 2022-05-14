#ifndef TP05_CARRE_H
#define TP05_CARRE_H

#include <iostream>
#include <string>

#include "Rectangle.h"
#include "../ex02.h"

namespace PFormeGeometrique {
    class Carre : public Rectangle {
        public:
            Carre(std::string nom, double cote) : Rectangle(nom, cote, cote) {};
            void affichage() const;
            ~Carre() { DEBUG(" ~IFormeGeometrique() "); }
    };
};

#endif //TP05_CARRE_H
