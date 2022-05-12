#ifndef TP05_AFORMEGEOMETRIQUE_H
#define TP05_AFORMEGEOMETRIQUE_H
#include <iostream>
#include "IFormeGeometrique.h"
#include "../ex02.h"

namespace PFormeGeometrique {
    class AFormeGeometrique : public IFormeGeometrique {
        public:
            virtual double perimetre() const;
            virtual void affichage() const;
            virtual std::string getNom() const;
            virtual double surface() const;
            virtual ~AFormeGeometrique() { DEBUG(" ~IFormeGeometrique() "); }
    };
};

#endif //TP05_AFORMEGEOMETRIQUE_H
