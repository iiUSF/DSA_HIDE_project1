#ifndef LOANMETH_H
#define LOANMETH_H
#include "Loan.h"
#include "LoanList.h"
using namespace std;
void initializeLoanList(LoanList& list);
void addLoan(LoanList& list, const Loan& loan);
bool removeLoan(LoanList& list, const string& loan_id);
Loan* findLoan(LoanList& list, const string& loan_id);
void displayAllLoans(const LoanList& list);
void clearLoanList(LoanList& list);

#endif