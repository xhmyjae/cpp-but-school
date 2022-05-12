#include "../include/PFormeGeometrique/Cercle.h"

/**
 * Cree un nouveau cercle avec le nom et le rayon donnes
 *
 * @param nom Le nom du cercle.
 * @param rayon le rayon du cercle
 */
PFormeGeometrique::Cercle::Cercle(std::string nom, double rayon) {
    this->nom = nom;
    this->rayon = rayon;
}

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
 * Renvoie le nom du cercle
 *
 * @return Le nom du cercle.
 */
std::string PFormeGeometrique::Cercle::getNom() const {
    return this->nom;
}

/**
 * Renvoie la surface du cercle
 *
 * @return La surface du cercle.
 */
double PFormeGeometrique::Cercle::surface() const {
    return std::numbers::pi * this->rayon * this->rayon;
}
