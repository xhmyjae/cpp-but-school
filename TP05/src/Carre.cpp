#include "../include/PFormeGeometrique/Carre.h"

/**
 * Cree un nouvel objet de type Carre, et initialise ses attributs
 *
 * @param nom Le nom de la forme.
 * @param cote le côté du carré
 */
PFormeGeometrique::Carre::Carre(std::string nom, double cote) {
    this->nom = nom;
    this->cote = cote;
}

/**
 * Renvoie le perimetre d'un carre
 *
 * @return Le périmètre du carré.
 */
double PFormeGeometrique::Carre::perimetre() const {
    return 4 * this->cote;
}

/**
 * Imprime le nom de l'objet, sa longueur de cote et son perimetre
 */
void PFormeGeometrique::Carre::affichage() const {
    std::cout << "Carre " << this->nom << " de cote " << this->cote << " de perimetre " << this->perimetre() << std::endl;
}

/**
 * Renvoie le nom du carre
 *
 * @return Le nom de l'objet.
 */
std::string PFormeGeometrique::Carre::getNom() const {
    return this->nom;
}

/**
 * Renvoie la surface du carre
 *
 * @return La surface du carre.
 */
double PFormeGeometrique::Carre::surface() const {
    return this->cote * this->cote;
}