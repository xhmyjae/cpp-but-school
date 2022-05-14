#ifndef TP05_AFORMEGEOMETRIQUE_H
#define TP05_AFORMEGEOMETRIQUE_H
#include <iostream>
#include "IFormeGeometrique.h"
#include "../ex02.h"

namespace PFormeGeometrique {
    class AFormeGeometrique : public IFormeGeometrique {
        protected:
        std::string nom;
        public:
            AFormeGeometrique(const std::string);
            virtual std::string getNom() const;
            virtual ~AFormeGeometrique() { DEBUG(" ~IFormeGeometrique() "); }
    };
};

#endif //TP05_AFORMEGEOMETRIQUE_H
