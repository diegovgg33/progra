# pragma once
#include "figure.h"

class Pentagon : public Figure{
    public:
    Pentagon (double side): _side(side){}
    double perimeter() const override;
    double area () const override;
    
    private:
    double _side;
};