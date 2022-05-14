#include "../include/PFormeGeometrique/Carre.h"

/**
 * Imprime le nom de l'objet, sa longueur de cote et son perimetre
 */
void PFormeGeometrique::Carre::affichage() const {
    std::cout << "Carre " << this->nom << " de cote " << this->largeur << " de perimetre " << this->perimetre() << std::endl;
}
