// ----------------------------------------------------------
// Proyecto: Simulador de sistema bancario
// Fecha: 14 de junio 2026.
// Autores:
//          A01798286 Edgar De La Rosa Menéndez
//          A01799914 Diego Vega Grados
// ----------------------------------------------------------

#include "bankaccount.h"
#include <iomanip>
#include <sstream>

std::string BankAccount::to_string() const {
    std::ostringstream oss;

    oss << "Numero de cuenta: " << _account_number << "\n"
        << "Titular de la cuenta: " << _account_holder_name << "\n"
        << "Saldo: $" << std::fixed << std::setprecision(2) << _balance;

    return oss.str();
}

std::ostream& operator<<(std::ostream& os, const BankAccount& ba) {
    return os << ba.to_string();
}
