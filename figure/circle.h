// ----------------------------------------------------------
// Práctica 2: Clase Figure
// Fecha: 8 de junio 2026.
// Autores:
//          A01798286 Edgar De La Rosa Menéndez
//          A01799914 Diego Vega Grados
// ----------------------------------------------------------

#pragma once

#include "figure.h"

class Circle : public Figure{
    public:
        Circle (double radius) : _radius(radius){}
        double area () const override;
        double perimeter () const override;
        std::string to_string() const override;

    private:
        double _radius;
};