#ifndef TP05_IFORMEGEOMETRIQUE_H
#define TP05_IFORMEGEOMETRIQUE_H

#include "../ex02.h"

namespace PFormeGeometrique {
    class IFormeGeometrique {
    public:
        virtual double perimetre() const = 0;
        virtual void affichage() const = 0;
        virtual std::string getNom() const = 0;
        virtual double surface() const = 0;
        virtual ~IFormeGeometrique() { DEBUG(" ~IFormeGeometrique() "); }
    };
}

#endif //TP05_IFORMEGEOMETRIQUE_H
