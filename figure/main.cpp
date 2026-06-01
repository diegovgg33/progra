// ----------------------------------------------------------
// Práctica 2: Clase Figure
// Fecha: 8 de junio 2026.
// Autores:
//          A01798286 Edgar De La Rosa Menéndez
//          A01799914 Diego Vega Grados
// ----------------------------------------------------------


#include <iostream>
#include <vector>
#include "figure.h"
#include "rectangle.h"
#include "circle.h"
#include "square.h"
#include "pentagon.h"

int main() {
    Circle a(1.0);
    Circle b(2.5);

    Rectangle c(2.0, 3.0);
    Rectangle d(7.25, 2.4);

    Square e(5.0);
    Square f(8.5);

    Pentagon g(6.0);
    Pentagon h(1.25);
    std::vector<Figure*> figures = {&a, &b, &c, &d, &e, &f, &g, &h};
    for (Figure* p : figures) {
        std::cout << *p << "\n";
    }

    return 0;
}
