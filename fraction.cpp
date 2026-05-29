// ----------------------------------------------------------
// Práctica 1: Clase Fraction
// Fecha: 1 de junio 2026.
// Autores:
//          A01798286 Edgar De La Rosa Menéndez
//          A01799914 Diego Vega Grados
// ----------------------------------------------------------

#include <stdexcept>
#include <iostream>
#include "fraction.h"
#include <string>
#include <numeric>

Fraction :: Fraction(int numerator,int denominator){
    if (denominator == 0){
        throw std::invalid_argument("Denominator cannot be Zero !");
    }
    int sign = 1;
    if (numerator * denominator <= 0){
        sign = -1;
    }
    int factor = std::gcd(numerator, denominator);
    _numerator = std::abs(numerator/factor);
    _denominator = std::abs(denominator/factor);
    if (sign == -1){
       _numerator = _numerator*sign;
    }
}

std::string Fraction::to_string() const{
    if (_numerator == 0){
        return "0";
    }
    else if (_denominator == 1){
        return std::to_string(_numerator);
    }
    else{
    return std::to_string(_numerator)
    +"/"
    +std::to_string(_denominator);
    }
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
    return static_cast<double>(_numerator) / static_cast<double>(_denominator);
}

bool Fraction::operator == (const Fraction& other) const{
    if ((_numerator == other._numerator)and(_denominator == other._denominator)){
        return true;
    }
    else{
        return false;
    }
}

bool Fraction::operator != (const Fraction& other) const{
   if (*this == other){
    return false;
   } 
   else{
    return true;
   }
};

Fraction Fraction::operator * (const Fraction& other) const {
    int numerator = _numerator * other._numerator;
    int denominator = _denominator * other._denominator;
    return Fraction(numerator, denominator);
}

Fraction Fraction::operator ~ () const{
    int numerator = _denominator;
    int denominator = _numerator;
    return Fraction(numerator, denominator);
}

Fraction Fraction::operator / (const Fraction& other) const{
    int numerator = _numerator*other._denominator;
    int denominator = _denominator*other._numerator;
    return Fraction(numerator,denominator);
}

std::ostream& operator<<(std::ostream& os, const Fraction& r){
    return os << r.to_string();
}
