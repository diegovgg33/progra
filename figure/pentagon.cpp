#include <cmath>
#include "pentagon.h"

double Pentagon::perimeter() const{
    return 5 * _side;
}

double Pentagon::area() const{
    double pi = std::acos(-1.0);
    double apothem = _side / 2 * tan(pi/5);
    return perimeter() * apothem / 2;
}



