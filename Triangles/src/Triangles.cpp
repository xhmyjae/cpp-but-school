#include "Triangles.h"

PForme::Triangle::Triangle(int a, int b, int c) {
    a_cote_a = a;
    a_cote_b = b;
    a_cote_c = c;
}

PForme::Triangle::Triangle(const Triangle& tr) {
    a_cote_a = tr.a_cote_a;
    a_cote_b = tr.a_cote_b;
    a_cote_c = tr.a_cote_c;
}

PForme::Triangle::~Triangle() {
    std::cout << "Destruction du triangle" << std::endl;
}

double PForme::Triangle::calcule_aire() const {
    double a = (a_cote_a + a_cote_b + a_cote_c) / 2;
    return sqrt(a * (a - a_cote_a) * (a - a_cote_b) * (a - a_cote_c));
}

void PForme::Triangle::afficher() const {
    std::cout << "Triangle de cotes " << a_cote_a << ", " << a_cote_b << ", " << a_cote_c << std::endl;
}

const int& PForme::Triangle::getA() const {
    return a_cote_a;
}

const int& PForme::Triangle::getB() const {
    return a_cote_b;
}

const int& PForme::Triangle::getC() const {
    return a_cote_c;
}

void PForme::Triangle::setA(int a) {
    a_cote_a = a;
}

void PForme::Triangle::setB(int b) {
    a_cote_b = b;
}

void PForme::Triangle::setC(int c) {
    a_cote_c = c;
}
