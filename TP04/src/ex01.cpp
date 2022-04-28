#include "../include/ex01.h"
#include "../main.h"
#include "../include/Couleurs.h"

/**
 * Constructeur de copie
 *
 * @param c L'objet à copier.
 */
ex01NS::Carte::Carte(ex01NS::Carte& c) {
    this->couleur = c.couleur;
    this->valeur = c.valeur;
}

/**
 * Destructeur
 */
ex01NS::Carte::~Carte() {
    std::cout << "Destruction de la carte" << std::endl;
}

/**
 * Cree une nouvelle carte avec la couleur et la valeur données
 *
 * @param c La couleur de la carte.
 * @param s la chaîne à afficher
 */
ex01NS::Carte::Carte(ex01NS::Couleur c, std::string const& s)
{
    this->couleur = c;
    this->valeur = s;
}

/**
 * Affiche la couleur et la valeur de la carte
 */
void const ex01NS::Carte::afficher()
{
    std::cout << "Couleur : " << int(this->couleur) << std::endl;
    std::cout << "Valeur : " << this->valeur << std::endl;
}

/**
 * Definit le type de carte.
 *
 * @param c La couleur de la carte.
 */
void ex01NS::Carte::setType(ex01NS::Couleur c)
{
    this->couleur = c;
}

/**
 * Fixe la valeur de la carte
 *
 * @param s la chaîne pour définir la valeur à
 */
void ex01NS::Carte::setValeur(std::string const& s)
{
    this -> valeur = s;
}

/**
 * Copie la valeur de la carte passée en paramètre à la carte courante
 *
 * @param c La carte à copier.
 */
void ex01NS::Carte::affecter(Carte & c)
{
    this->couleur = c.couleur;
    this->valeur = c.valeur;
}

/**
 * La fonction `equal` est membre de la classe `Carte` qui se trouve dans l'espace de noms `ex01NS`. La fonction renvoie un
 * `bool` et prend une `Carte` par référence
 *
 * @param c La carte à comparer.
 * @return Une valeur booléenne.
 */
bool const ex01NS::Carte::equal(Carte& c)
{
    return (this->couleur == c.couleur && this->valeur == c.valeur);
}

/**
 * Renvoie une référence à une chaîne constante
 *
 * @return La valeur de la carte.
 */
std::string const& ex01NS::Carte::getValeur() {
    return this->valeur;
}

/**
 * Cree deux cartes, les affiche, change la deuxième carte, l'affiche à nouveau, puis compare les deux cartes
 */
void ex01()
{
    std::cout << "Jeu de cartes" << std::endl;
    ex01NS::Carte c1(ex01NS::Couleur::PIQUE, "Ace");
    std::cout << "Carte 1 : " << std::endl;
    try {
        if (!isCard(c1.getValeur())) {
            throw std::invalid_argument("La carte n'est pas valide");
        } else {
            c1.afficher();
            ex01NS::Carte c2(c1);
            c2.setType(ex01NS::Couleur::TREFLE);
            c2.setValeur((std::string const&) "Queen");
            std::cout << "Carte 2 : " << std::endl;
            try {
                if (!isCard(c2.getValeur())) {
                    throw std::invalid_argument("La carte n'est pas valide");
                } else {
                    c2.afficher();
                    ex01NS::Carte c3(ex01NS::Couleur::PIQUE,"2");
                    try {
                        if (!isCard(c3.getValeur())) {
                            throw std::invalid_argument("La carte n'est pas valide");
                        } else {
                            c2.affecter(c3);
                            std::cout << "Carte 2 : " << std::endl;
                            c2.afficher();
                            std::cout << "Carte 3 : " << std::endl;
                            c3.afficher();

                            if (c1.equal(c2)) {
                                std::cout << "Carte 1 est egale a Carte 2" << std::endl;
                            } else {
                                std::cout << "Cartes non egales" << std::endl;
                                std::cout << "Carte 1 : " << std::endl;
                                c1.afficher();
                                std::cout << "Carte 2 : " << std::endl;
                                c2.afficher();
                            }

                            c1.~Carte();
                        }
                    } catch (std::exception s) {
                        std::cout << "Erreur : " << s.what() << std::endl;
                    }
                }
            } catch (std::exception s) {
                std::cout << "Erreur : " << s.what() << std::endl;
            }
        }
    } catch (std::exception s) {
        std::cout << "Erreur : " << s.what() << std::endl;
    }

    if (tryAgain()) {
        ex01();
    } else {
        displayMenu();
    }
};
