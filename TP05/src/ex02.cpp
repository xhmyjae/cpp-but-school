#include "../utils/utils.h"
#include "../main.h"
#include "../include/menu.h"
#include "../include/ex02.h"
#include "../include/PFormeGeometrique/Cercle.h"
#include "../include/PFormeGeometrique/Carre.h"
#include "../include/PFormeGeometrique/Rectangle.h"
#include "../include/PFormeGeometrique/IFormeGeometrique.h"
#include "../include/PFormeGeometrique/AFormeGeometrique.h"

using namespace PFormeGeometrique;

void ex02()
{
    Cercle c("C10",10.);
    c.affichage();
    c.perimetre();
    c.surface();
    Rectangle r("R10",10.,5.0);
    r.affichage();
    r.perimetre();
    r.surface();
    Carre ca("CA10",10.);
    ca.affichage();
    ca.perimetre();
    ca.surface();
    IFormeGeometrique *f = new Carre("CARR002",12);
    f->affichage();
    delete f;f=NULL;
    IFormeGeometrique &f2 = ca;
    f2.affichage();

    if (tryAgain()) {
        ex02();
    } else {
        Menu::execute();
    }
}
