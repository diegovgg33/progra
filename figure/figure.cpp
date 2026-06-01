// ----------------------------------------------------------
// Práctica 2: Clase Figure
// Fecha: 8 de junio 2026.
// Autores:
//          A01798286 Edgar De La Rosa Menéndez
//          A01799914 Diego Vega Grados
// ----------------------------------------------------------

# include "figure.h"
# include <iomanip>
# include <sstream>

std::string Figure::to_string () const{
    std::ostringstream s ;
    s << std::fixed << std::setprecision(2);
    s << "my area is " << area() << " my perimeter is " << perimeter();
    return s.str();
}

std::ostream& operator << (std::ostream os, const Figure& figure){
    return os << figure.to_string();
}