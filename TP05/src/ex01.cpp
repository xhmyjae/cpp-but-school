#include "../include/ex01.h"
#include "../main.h"
#include "../utils/utils.h"
#include "../include/menu.h"


/**
 * Constructeur
 *
 * @param p L'objet qui est copié.
 */
ex01NS::Personne::Personne(Personne& p)
{
    this->numero = p.numero;
    this->nom = p.nom;
    this->sexe = p.sexe;
}

/**
 * Destructeur
 */
ex01NS::Personne::~Personne()
{
    std::cout << "Destruction de " << this->nom << std::endl;
}

/**
 * Creer une nouvelle Personne
 *
 * @param numero le numéro de la personne
 * @param nom le nom de la classe
 * @param sexe ex01NS::Sexe
 */
ex01NS::Personne::Personne(int const& numero, std::string const& nom, ex01NS::Sexe sexe)
{
    this->numero = numero;
    this->nom = nom;
    this->sexe = sexe;
}

/**
 * Affiche le nom, le numéro et le sexe de la personne
 */
void const ex01NS::Personne::afficher()
{
    std::cout << "Nom : " << this->nom << std::endl;
    std::cout << "Numero : " << this->numero << std::endl;
    std::cout << "Sexe : " << int(this->sexe) << std::endl;
}
/**
 * Renvoie une référence constante à la variable de membre privé numero
 *
 * @return La valeur du numéro de membre privé.
 */
int const& ex01NS::Personne::getNumero()
{
    return this->numero;
}

/**
 * Renvoie une référence à une chaîne constante
 *
 * @return Une référence à l'attribut nom de l'objet.
 */
std::string const& ex01NS::Personne::getNom()
{
    return this->nom;
}

/**
 * Renvoie le sexe de la personne.
 *
 * @return L'attribut sexe de l'objet Personne.
 */
ex01NS::Sexe ex01NS::Personne::getSexe()
{
    return this->sexe;
}

/**
 * Demande a l'utilisateur d'entrer 10 notes, puis les stocke dans le tableau de notes (grades)
 */
void ex01NS::Etudiant::rentrerNote()
{
    for (int i = 0; i < 10; i++) {
        std::string number;
        std::cout << "Entrer la note n." << i+1 << " : " << std::endl;
        std::cin >> number;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        while (!isNumber(number) || !isGrade(stoi(number), 0, 20)) {
            std::cout << "Entrer une note comprise entre 0 et 20" << std::endl;
            std::cin >> number;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        this->grades[i] = stoi(number);
    }
}

/**
 * Prend un tableau d'entiers, renvoie la moyenne des entiers
 *
 * @param grades un tableau d'entiers representant les notes
 * @param n le nombre de notes dans le tableau
 * @return La moyenne des notes.
 */
float ex01NS::Etudiant::getAverage()
{
    int sum = 0;

    for (int i : this->grades) {
        sum += i;
    }

    return sum / 10.0;
}

/**
 * "Renvoie la valeur minimale dans le tableau."
 *
 * @param grades un tableau d'entiers representant les notes
 * @param n le nombre de notes dans le tableau
 * @return La valeur minimale dans le tableau.
 */
int ex01NS::Etudiant::getMin()
{
    int min = this->grades[0];

    for (int i : this->grades) {
        if (i < min) {
            min = i;
        }
    }

    return min;
}

/**
 * "Renvoie la valeur maximale dans le tableau."
 *
 * @param grades un tableau d'entiers
 * @param n le nombre de notes dans le tableau
 * @return La valeur maximale dans le tableau.
 */
int ex01NS::Etudiant::getMax()
{
    int max = this->grades[0];

    for (int i : this->grades) {
        if (i > max) {
            max = i;
        }
    }

    return max;
}

/**
 * Affiche les notes moyennes, minimales et maximales d'un étudiant
 *
 * @param grades le tableau des notes
 */
void ex01NS::Etudiant::afficherNote()
{
    std::cout << "La moyenne de l'etudiant est : " << this->getAverage() << std::endl;
    std::cout << "La note minimale de l'etudiant est : " << this->getMin() << std::endl;
    std::cout << "La note maximale de l'etudiant est : " << this->getMax() << std::endl;
}


void ex01()
{
    ex01NS::Etudiant e(17, "jbwojvjwvjw", ex01NS::Sexe::FEMININ);
    e.rentrerNote();
    e.afficher();
    e.afficherNote();

    if (tryAgain()) {
        ex01();
    } else {
        Menu::execute();
    }
}
