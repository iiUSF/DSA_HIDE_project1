#ifndef TRANSACTION_H
#define TRANSACTION_H
#include <iostream>
#include <string>
using namespace std;
struct Transaction
{
    string transaction_id;
    string account_number;
    string type;
    double amount;
    string date;
};
#endif