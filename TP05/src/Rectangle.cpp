#include "../include/PFormeGeometrique/Rectangle.h"

/**
 * Cree un nouvel objet Rectangle avec le nom, la longueur et la largeur donnes
 *
 * @param nom le nom du rectangle
 * @param longueur la longueur du rectangle
 * @param largeur la largeur du rectangle
 */
PFormeGeometrique::Rectangle::Rectangle(std::string nom, double longueur, double largeur) {
    this->nom = nom;
    this->longueur = longueur;
    this->largeur = largeur;
}

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
 * Renvoie le nom du rectangle
 *
 * @return Le nom du rectangle.
 */
std::string PFormeGeometrique::Rectangle::getNom() const {
    return this->nom;
}

/**
 * Renvoie la surface du rectangle
 *
 * @return La surface du rectangle.
 */
double PFormeGeometrique::Rectangle::surface() const {
    return this->longueur * this->largeur;
}
