#include "../include/PFormeGeometrique/AFormeGeometrique.h"

/**
 * Constructeur qui prend une chaine comme parametre et l'assigne à la variable membre nom
 *
 * @param nom Le nom de la forme.
 */
PFormeGeometrique::AFormeGeometrique::AFormeGeometrique(const std::string nom)
{
    this->nom = nom;
}

/**
 * Renvoie le nom de la forme
 *
 * @return Le nom de la forme.
 */
std::string PFormeGeometrique::AFormeGeometrique::getNom() const
{
    return this->nom;
}
