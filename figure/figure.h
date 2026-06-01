// ----------------------------------------------------------
// Práctica 2: Clase Figure
// Fecha: 8 de junio 2026.
// Autores:
//          A01798286 Edgar De La Rosa Menéndez
//          A01799914 Diego Vega Grados
// ----------------------------------------------------------

#pragma once
#include <iostream>
#include <string>

class Figure {
    public:
        virtual double area() const = 0;
        virtual double perimeter() const = 0;
        virtual std::string to_string () const;
};

std::ostream& operator << (
    std::ostream& os, const Figure& figure)