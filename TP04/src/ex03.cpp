#include "../include/ex03.h"
#include "../main.h"

/**
 * Constructeur
 *
 * @param p L'objet qui est copié.
 */
ex03NS::Personne::Personne(Personne& p)
{
    this->numero = p.numero;
    this->nom = p.nom;
    this->sexe = p.sexe;
}

/**
 * Destructeur
 */
ex03NS::Personne::~Personne()
{
    std::cout << "Destruction de " << this->nom << std::endl;
}

/**
 * Creer une nouvelle Personne
 *
 * @param numero le numéro de la personne
 * @param nom le nom de la classe
 * @param sexe ex03NS::Sexe
 */
ex03NS::Personne::Personne(int const& numero, std::string const& nom, ex03NS::Sexe sexe)
{
    this->numero = numero;
    this->nom = nom;
    this->sexe = sexe;
}

/**
 * Affiche le nom, le numéro et le sexe de la personne
 */
void const ex03NS::Personne::afficher()
{
    std::cout << "Nom : " << this->nom << std::endl;
    std::cout << "Numero : " << this->numero << std::endl;
    std::cout << "Sexe : " << int(this->sexe)<< std::endl;
}

/**
 * Renvoie une référence constante à la variable de membre privé numero
 *
 * @return La valeur du numéro de membre privé.
 */
int const& ex03NS::Personne::getNumero()
{
    return this->numero;
}

/**
 * Renvoie une référence à une chaîne constante
 *
 * @return Une référence à l'attribut nom de l'objet.
 */
std::string const& ex03NS::Personne::getNom()
{
    return this->nom;
}

/**
 * Renvoie le sexe de la personne.
 *
 * @return L'attribut sexe de l'objet Personne.
 */
ex03NS::Sexe ex03NS::Personne::getSexe()
{
    return this->sexe;
}

/**
 * Cree un objet Personne, le copie dans un autre objet Personne, puis détruit le premier objet
 */
void ex03()
{
    ex03NS::Personne p1(17, "jbwojvjwvjw", ex03NS::Sexe::FEMININ);
    ex03NS::Personne p2(p1);
    std::cout << "p1" << std::endl;
    p1.afficher();
    std::cout << "p2" << std::endl;
    std::cout << "Numero : " << p2.getNumero() << std::endl;
    std::cout << "Nom : " << p2.getNom() << std::endl;
    std::cout << "Sexe : " << int(p2.getSexe()) << std::endl;

    p1.~Personne();

    if (tryAgain()) {
        ex03();
    } else {
        displayMenu();
    }
}
