// ----------------------------------------------------------
// Práctica 2: Clase Figure
// Fecha: 8 de junio 2026.
// Autores:
//          A01798286 Edgar De La Rosa Menéndez
//          A01799914 Diego Vega Grados
// ----------------------------------------------------------

#pragma once

#include "figure.h"

class Rectangle : public Figure{
    public:
        Rectangle ( double width, double height):
        _width(width), _height(height) {}
        double area () const override;
        double perimeter () const override;

    private:
        double _width;
        double _height;
};