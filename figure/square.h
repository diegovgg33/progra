// ----------------------------------------------------------
// Práctica 2: Clase Figure
// Fecha: 8 de junio 2026.
// Autores:
//          A01798286 Edgar De La Rosa Menéndez
//          A01799914 Diego Vega Grados
// ----------------------------------------------------------

#pragma once

#include "rectangle.h"

class Square : public Rectangle{
    public:
    Square (double side) : Rectangle (side, side) {}
    void spongify() const;
};