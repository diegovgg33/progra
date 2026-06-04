// ----------------------------------------------------------
// Proyecto: Simulador de sistema bancario
// Fecha: 14 de junio 2026.
// Autores:
//          A01798286 Edgar De La Rosa Menéndez
//          A01799914 Diego Vega Grados
// ----------------------------------------------------------

#include "savingsaccount.h"
#include <stdexcept>

void SavingsAccount::deposit(double amount){
    if (amount < 0){
        throw std::runtime_error ("El monto del deposito no puede ser negativo");
    }
    _balance = _balance + amount; 
    _balance = _balance + _balance * (_interest_rate / 100);
}

void SavingsAccount::withdraw(double amount){
    if (amount < 0){
        throw std::runtime_error ("El monto del retiro no puede ser negativo");
    }
    if (_balance < amount){
        throw std::runtime_error("Fondos insuficientes en la cuenta de ahorros");
    }
    _balance = _balance - amount;
}
