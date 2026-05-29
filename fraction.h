// ----------------------------------------------------------
// Práctica 1: Clase Fraction
// Fecha: 1 de junio 2026.
// Autores:
//          A01798286 Edgar De La Rosa Menéndez
//          A01799914 Diego Vega Grados
// ----------------------------------------------------------

#pragma once

#include <iostream>
#include <numeric>

class Fraction {

public:

    Fraction(int numerator=0,int denominator=1);
    std::string to_string() const;
    Fraction operator + (const Fraction& other) const;
    Fraction operator - () const;
    Fraction operator - (const Fraction& other) const;
    operator double () const; 
    bool operator == (const Fraction& other) const;
    bool operator != (const Fraction& other) const;
    Fraction operator * (const Fraction& other) const;

private:

    int _numerator;
    int _denominator;
};

std::ostream& operator << (std::ostream& os, const Fraction& r);
