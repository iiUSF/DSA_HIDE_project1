#ifndef LOAN_H
#define LOAN_H
#include <iostream>
#include <string>
using namespace std;
struct Loan
{
    string loan_id;
    string loan_type;
    double principal_amount;
    double amount_paid;
    double remaining_balance;
    string start_date;
    string end_date;
    string status;
};
#endif