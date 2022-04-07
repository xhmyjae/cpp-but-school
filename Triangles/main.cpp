#include "main.h"

int main() {
    std::cout << "Choisir la 1re valeur : " << std::endl;
    int a = inputNumber();
    std::cout << "Choisir la 2e valeur : " << std::endl;
    int b = inputNumber();
    std::cout << "Choisir la 3e valeur : " << std::endl;
    int c = inputNumber();

    PForme::Triangle triangle;
    triangle.setA(a);
    triangle.setB(b);
    triangle.setC(c);
    triangle.afficher();
    std::cout << "L'aire est de " << triangle.calcule_aire() << std::endl;

    return 0;
}

