// ----------------------------------------------------------
// Proyecto: Simulador de sistema bancario
// Fecha: 14 de junio 2026.
// Autores:
//          A01798286 Edgar De La Rosa Menéndez
//          A01799914 Diego Vega Grados
// ----------------------------------------------------------

#pragma once
#include <iostream>
#include <string>

class BankAccount {
    public:
    BankAccount (std::string account_number, std::string account_holder_name, double balance):
     _account_number(account_number), _account_holder_name (account_holder_name), _balance (balance)  {}
    virtual void deposit (double amount) = 0;
    virtual void withdraw (double amount) = 0;
    std::string to_string () const;

    protected:
    std::string _account_number;
    std::string _account_holder_name;
    double _balance;
};

std::ostream& operator << (std::ostream& os, const BankAccount& ba);