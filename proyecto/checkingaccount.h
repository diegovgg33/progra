// ----------------------------------------------------------
// Proyecto: Simulador de sistema bancario
// Fecha: 14 de junio 2026.
// Autores:
//          A01798286 Edgar De La Rosa Menéndez
//          A01799914 Diego Vega Grados
// ----------------------------------------------------------

#pragma once
#include "bankaccount.h"

class CheckingAccount : public BankAccount {
    public:
    CheckingAccount (std::string account_number, std::string account_holder_name, double balance, double overdraft_limit):
    BankAccount (account_number, account_holder_name, balance), _overdraft_limit (overdraft_limit){}
    void deposit (double amount) override;
    void withdraw (double amount) override;

    private:
    double _overdraft_limit;
};