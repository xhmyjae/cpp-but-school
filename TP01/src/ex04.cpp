#include "ex04.h"
#include "../main.h"

/**
 * Saisissez 10 notes et affichez la moyenne, le minimum et le maximum
 */
void enterGrades() {
    int grades[10];

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

        grades[i] = stoi(number);
    }

    std::cout << "Moyenne des notes : " << getAverage(grades, 10) << std::endl;
    std::cout << "Note minimale : " << getMin(grades, 10) << std::endl;
    std::cout << "Note maximale : " << getMax(grades, 10) << std::endl;
    if (tryAgain()) {
        enterGrades();
    } else {
        displayMenu();
    }
}

/**
 * Prend un tableau d'entiers, renvoie la moyenne des entiers
 *
 * @param grades un tableau d'entiers representant les notes
 * @param n le nombre de notes dans le tableau
 * @return La moyenne des notes.
 */
float getAverage(int grades[], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += grades[i];
    }

    return sum / n;
}

/**
 * "Renvoie la valeur minimale dans le tableau."
 *
 * @param grades un tableau d'entiers representant les notes
 * @param n le nombre de notes dans le tableau
 * @return La valeur minimale dans le tableau.
 */
int getMin(int grades[], int n) {
    int min = grades[0];

    for (int i = 0; i < n; i++) {
        if (grades[i] < min) {
            min = grades[i];
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
int getMax(int grades[], int n) {
    int max = grades[0];

    for (int i = 0; i < n; i++) {
        if (grades[i] > max) {
            max = grades[i];
        }
    }

    return max;
}
