#include "../include/ex02.h"
#include "../main.h"
#include "../include/Couleurs.h"
//unsigned ex02NS::Carte::NbCreation=0;
/**
 * Constructeur de copie.
 *
 * @param c L'objet à copier.
 */
ex02NS::Carte::Carte(ex02NS::Carte& c) {
    this->couleur = c.couleur;
    this->valeur = c.valeur;
    ex02NS::Carte::NbCreation++;
}

/**
 * Destructeur
 */
ex02NS::Carte::~Carte() {
    std::cout << "Destruction de la carte" << std::endl;
}

/**
 * Ex02NS::Carte::Carte(ex02NS::Couleur c, std::string const& s)
 *
 * Cette fonction est un constructeur pour la classe ex02NS::Carte. Il prend deux arguments, une Couleur et une chaîne. Il
 * fixe la couleur et la valeur de l'objet aux arguments. Il incrémente également la variable statique NbCreation
 *
 * @param c la couleur de la carte
 * @param s la valeur de la carte
 */
ex02NS::Carte::Carte(ex02NS::Couleur c, std::string const& s)
{
    this->couleur = c;
    this->valeur = s;
    ex02NS::Carte::NbCreation++;
}

/**
 * Affiche la couleur et la valeur de la carte
 */
void const ex02NS::Carte::afficher()
{
    std::cout << "Couleur : " << int(this->couleur) << std::endl;
    std::cout << "Valeur : " << this->valeur << std::endl;
}

/**
 * Fixe la couleur de la carte
 *
 * @param c La couleur de la carte.
 */
void ex02NS::Carte::setType(ex02NS::Couleur c)
{
    this->couleur = c;
}

/**
 * Fixe la valeur de la carte
 *
 * @param s la chaîne pour définir la valeur à
 */
void ex02NS::Carte::setValeur(std::string const& s)
{
    this -> valeur = s;
}

/**
 * Opérateur d'affectation. Il attribue la valeur du côté droit au côté gauche.
 *
 * @return Une référence à l'objet qui a été assigné.
 */
ex02NS::Carte &ex02NS::Carte::operator=(ex02NS::Carte & c) {
    this->couleur = c.couleur;
    this->valeur = c.valeur;
    return *this;
}

/**
 * Compare deux cartes et renvoie true si elles sont identiques.
 *
 * @param c La carte à comparer.
 * @return Une valeur booléenne.
 */
bool const ex02NS::Carte::operator==(ex02NS::Carte & c) {
    if (this->couleur == c.couleur && this->valeur == c.valeur)
        return true;
    return false;
}

/**
 * Compare deux cartes et renvoie true si elles sont différentes.
 *
 * @param c La carte à comparer.
 * @return Une valeur booléenne.
 */
bool const ex02NS::Carte::operator!=(ex02NS::Carte & c) {
    if (this->couleur != c.couleur && this->valeur != c.valeur)
        return true;
    return false;
}

/**
 * Renvoie une référence à une chaîne constante
 *
 * @return La valeur de la carte.
 */
std::string const& ex02NS::Carte::getValeur() {
    return this->valeur;
}

/**
 * Cree deux cartes, les affiche, les compare, puis affiche le nombre de cartes créées
 */
void ex02() {
    std::cout << "Jeu de cartes" << std::endl;
    ex02NS::Carte c1(ex02NS::Couleur::PIQUE, "Ace");
    std::cout << "Carte 1 : " << std::endl;
    try {
        if (!isCard(c1.getValeur())) {
            throw std::invalid_argument("La carte n'est pas valide");
        } else {
            c1.afficher();
            ex02NS::Carte c2(c1);
            c2.setType(ex02NS::Couleur::TREFLE);
            c2.setValeur((std::string const&) "Queen");
            std::cout << "Carte 2 : " << std::endl;
            try {
                if (!isCard(c2.getValeur())) {
                    throw std::invalid_argument("La carte n'est pas valide");
                } else {
                    c2.afficher();

                    if (c1 != c2) {
                        std::cout << "Les cartes sont differentes" << std::endl;
                    } else {
                        std::cout << "Les cartes sont identiques" << std::endl;
                    }

                    std::cout << "Nombre de cartes creees : " << ex02NS::Carte::NbCreation << std::endl;

                    c1.~Carte();
                }
            } catch (std::exception s) {
                std::cout << "Erreur : " << s.what() << std::endl;
            }
        }
    } catch (std::exception s) {
        std::cout << "Erreur : " << s.what() << std::endl;
    }

    if (tryAgain()) {
        ex02();
    } else {
        displayMenu();
    }
}
