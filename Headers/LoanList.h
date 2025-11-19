#ifndef LOANLIST_H
#define LOANLIST_H
#include <iostream>
#include <string>
#include "Loan.h"
using namespace std;
struct LoanNode
{
    Loan data;
    LoanNode* next;
    LoanNode* prev;
};
struct LoanList
{
    LoanNode* head;
    LoanNode* tail;
    int size;
};
#endif