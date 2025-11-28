#include "Customer.h"
#include "LoanMeth.h"
#include <iostream>
#include "Employee.h"
#include <string>

void totalnumofloans(const Customer arr[],int size);
void numofloansbytype(const Customer arr[],int size);
void numofloansbystatus(const Customer arr[],int size);
void activeloanindate(const Customer arr[],int size,string startDateR,string endDateR);
void highestloanamount(const Customer arr[],int size);
void highestbalance(const Customer arr[],int size);
void lowestbalance(const Customer arr[],int size);
void NumberofEmployees(const Employee employeeArr[],int size);
void NumberofEmployeesbyBB(const Employee arr[],int size,int branches);