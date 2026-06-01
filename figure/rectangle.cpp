// ----------------------------------------------------------
// Práctica 2: Clase Figure
// Fecha: 8 de junio 2026.
// Autores:
//          A01798286 Edgar De La Rosa Menéndez
//          A01799914 Diego Vega Grados
// ----------------------------------------------------------

#include "rectangle.h"

double Rectangle::perimeter() const{
    return ((2*_width) + (2*_height));
}

double Rectangle::area() const{
    return _width*_height;
}