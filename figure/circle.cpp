// ----------------------------------------------------------
// Práctica 2: Clase Figure
// Fecha: 8 de junio 2026.
// Autores:
//          A01798286 Edgar De La Rosa Menéndez
//          A01799914 Diego Vega Grados
// ----------------------------------------------------------

# define _USE_MATH_DEFINES
# include <cmath>
# include "circle.h"

double Circle::area() const{
    return M_PI * _radius * _radius;
}

double Circle::perimeter() const{
    return M_PI * 2 *_radius; 
}

std::string Circle::to_string() const{
    return "I'm a circle!" + Figure::to_string();
}