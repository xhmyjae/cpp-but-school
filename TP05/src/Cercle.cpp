#include <utility>

#include "../include/PFormeGeometrique/Cercle.h"

/**
 * Renvoie le perimetre du cercle
 *
 * @return Le perimetre du cercle.
 */
double PFormeGeometrique::Cercle::perimetre() const {
    return 2 * std::numbers::pi * this->rayon;
}

/**
 * Imprime le nom du cercle, son rayon et son perimetre
 */
void PFormeGeometrique::Cercle::affichage() const {
    std::cout << "Cercle " << this->nom << " de rayon " << this->rayon << " de perimetre " << this->perimetre() << std::endl;
}

/**
 * Renvoie la surface du cercle
 *
 * @return La surface du cercle.
 */
double PFormeGeometrique::Cercle::surface() const {
    return std::numbers::pi * this->rayon * this->rayon;
}
