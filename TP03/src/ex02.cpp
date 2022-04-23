#include "ex02.h"
#include "../main.h"

Personne *creer_personne() {
    Personne *p = new Personne;

    return p;
}

/**
 * Print le nom, l'age et le sexe d'une personne.
 *
 * @param p un pointeur de la struct Personne
 */
void afficher_personne(Personne *p) {
    std::printf("\tnumero : %d\n", p->numero);
    std::printf("\tnom : %s\n", p->nom);
    switch (p->sexe) {
        case MASCULIN:
            std::printf("\tsexe : masculin\n");

            break;
        case FEMININ:
            std::printf("\tsexe : feminin\n");

            break;
        default:
            std::printf("\tsexe : inconnu\n");
            break;
    }
}

/**
 * Supprime le pointeur de personne.
 *
 * @param p un pointeur de la struct Personne
 */
void detruire_personne(Personne *p) {
    delete p;
}

/**
 * Initialise la structure Personne.
 *
 * @param numero le numero de la personne
 * @param nom un pointeur vers une string
 * @param sexe 0 pour inconnu, 1 pour homme, 2 pour femme
 * @param p un pointeur de la struct Personne
 */
void initialise_personne(int numero, char *nom, Sexe sexe, Personne *p) {
    p->numero = numero;
    strcpy(p->nom, nom);
    p->sexe = sexe;
}

/**
 * Renvoit le nom d'une personne
 *
 * @param p a pointer to a Personne structure
 *
 * @return Un pointeur vers le premier caractère de la chaîne.
 */
char *nom_personne(Personne *p) {
    return p->nom;
}

/**
 * Il renvoie le numéro d'une personne
 *
 * @param p a pointer to a Personne structure
 *
 * @return Le numéro de la personne.
 */
int numero_personne(Personne *p) {
    return p->numero;
}

/**
 * Il renvoie le sexe d'une personne
 *
 * @param p a pointer to a Personne structure
 *
 * @return Le sexe de la personne.
 */
Sexe sexe_personne(Personne *p) {
    return p->sexe;
}

void test_personne() {
    Personne *p = creer_personne();
    initialise_personne(17, "test", FEMININ, p);

    std::cout << "Utilisation de la fonction affiche_personne" << std::endl;
    afficher_personne(p);

    std::cout << "Utilisation des autres fonctions" << std::endl;
    std::printf("\tnom : %s\n", nom_personne(p));
    std::printf("\tnumero : %d\n", numero_personne(p));
    switch (sexe_personne(p)) {
        case 1:
            std::printf("\tsexe : masculin\n");
            break;
        case 2:
            std::printf("\tsexe : feminin\n");
            break;
        default:
            std::printf("\tsexe : inconnu\n");
            break;
    }

    detruire_personne(p);
}
