// ----------------------------------------------------------
// Práctica 1: Clase Fraction
// Fecha: 1 de junio 2026.
// Autores:
//          A01798286 Edgar De La Rosa Menéndez
//          A0xxxxxxx CHAI
// ----------------------------------------------------------

#include <numeric>
#include <stdexcept>
#include "fraction.h"
#include <string>

Fraction :: Fraction(int numerator,int denominator){
    if (denominator == 0){
        throw std::invalid_argument("Denominator can not be 0");
    }
    
        int sign = 1;
    if (numerator * denominator < 0){
        sign = -1;
    }
    
    int factor = std::gcd(numerator,denominator);
    
    _numerator = std::abs(numerator/factor);
    _denominator = std::abs(denominator/factor);
}

std::string Fraction::to_string() const{
    return std::to_string(_numerator)
    +"/"
    +std::to_string(_denominator);
}

Fraction Fraction::operator + (const Fraction& other) const{
    int numerator = _numerator * other._denominator + _denominator * other._numerator;
    int denominator = _denominator * other._denominator;
    return Fraction(numerator, denominator);
}

Fraction Fraction::operator - () const{
    return Fraction(-_numerator, _denominator);
}

Fraction Fraction::operator - (const Fraction& other)const{
    return *this + -other;
}

Fraction::operator double () const{
    double d;
    return d = static_cast<double>(*this);
}

bool Fraction::operator == (const Fraction& other) const{
    if ((_numerator == other._numerator)and(_denominator == other._numerator)){
        return true;
    }
    else{
        return false;
    }
}

std::ostream& operator<<(std::ostream&, const Fraction& r){
    return os << r.to_string();
}