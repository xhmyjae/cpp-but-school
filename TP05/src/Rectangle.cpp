#include "../include/PFormeGeometrique/Rectangle.h"

/**
 * Renvoie le périmètre du rectangle
 *
 * @return Le périmètre du rectangle.
 */
double PFormeGeometrique::Rectangle::perimetre() const {
   return (this->longueur * 2) + (this->largeur * 2);
}

/**
 * Imprime le nom du rectangle, sa longueur et sa largeur
 */
void PFormeGeometrique::Rectangle::affichage() const {
    std::cout << "Rectangle " << this->nom << " de longueur " << this->longueur << " et de largeur " << this->largeur << std::endl;
}

/**
 * Renvoie la surface du rectangle
 *
 * @return La surface du rectangle.
 */
double PFormeGeometrique::Rectangle::surface() const {
    return this->longueur * this->largeur;
}
