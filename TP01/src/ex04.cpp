#include "ex04.h"
#include "../main.h"

void enterGrades() {
    int grades[10];

    for (int i = 0; i < 10; i++) {
        std::string number;
        std::cout << "Entrer la note n." << i+1 << " : " << std::endl;
        std::cin >> number;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        while (!isNumber(number) || 0 <= std::stoi(number) && std::stoi(number) <= 20) {
            std::cout << "Entrer une note comprise entre 0 et 20" << std::endl;
            std::cin >> number;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        grades[i] = stoi(number);
    }

    std::cout << "Moyenne des notes : " << getAverage(grades[10], 10) << std::endl;
    std::cout << "Note minimale : " << getMin(grades[10], 10) << std::endl;
    std::cout << "Note maximale : " << getMax(grades[10], 10) << std::endl;
}

int getAverage(int grades[], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += grades[i];
    }

    return sum / n;
}

int getMin(int grades[], int n) {
    int min = grades[0];

    for (int i = 0; i < n; i++) {
        if (grades[i] < min) {
            min = grades[i];
        }
    }

    return min;
}

int getMax(int grades[], int n) {
    int max = grades[0];

    for (int i = 0; i < n; i++) {
        if (grades[i] > max) {
            max = grades[i];
        }
    }

    return max;
}
