#include <iostream>

#ifndef TP02_TRIANGLES_H
#define TP02_TRIANGLES_H

namespace PForme {
    class Triangle {
    public:
        Triangle(int a = -1, int b = -1, int c = -1);
        Triangle(const Triangle& tr);
        ~Triangle();
        double calcule_aire() const;
        void afficher() const;
        const int& getA() const;
        const int& getB() const;
        const int& getC() const;
        void setA(int a);
        void setB(int b);
        void setC(int c);
    protected:
        int a_cote_a;
        int a_cote_b;
        int a_cote_c;
    };
}

#endif //TP02_TRIANGLES_H
