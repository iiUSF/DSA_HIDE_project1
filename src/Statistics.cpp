#include "Customer.h"
#include "LoanMeth.h"
#include <iostream>
#include "Employee.h"
using namespace std;
#include <array>
#include <string>
void totalnumofloans(const Customer arr[],int size){
    int sum=0;
    for (int i=0; i<size;i++){
        if(arr[i].loans){
        sum+= arr[i].loans->size;
        }
    }
    cout<< sum;
}
void numofloansbytype(const Customer arr[],int size){
    //(car, home, student, business)
    if(size==0){
    cout<<"There are no costumers";
    }
    else{
    int carN=0,homeN=0,studentN=0, businessN=0;
    LoanNode* n;
    for (int i=0;i<size;i++){
        if(!isEmpty(*arr[i].loans)){
        n=arr[i].loans->head;
        while(n){
            if (n->data.loanType=="car") carN++;
            else if(n->data.loanType=="home") homeN;
            else if(n->data.loanType=="student") studentN;
            else if(n->data.loanType=="business") businessN;
            n=n->next; 
        }

    }
}
}

}
void numofloansbystatus(const Customer arr[],int size){
    //(active, completed, overdue)
    if(size==0){
        cout<<"There are no costumers";
    }
    else{
    int activeN=0,completedN=0,overdueN=0;
    LoanNode* n;
    for (int i=0;i<size;i++){
        if(!isEmpty(*arr[i].loans)){
        n=arr[i].loans->head;
        while(n){
            if (n->data.status=="active") activeN++;
            else if(n->data.status=="completed") completedN;
            else if(n->data.status=="overdue") overdueN;
            n=n->next; 
        }
    }

    }
}
}
string normalize(string date){
    // Refolmelate the date into YYYYMMDD
    return date.substr(6,4)+date.substr(3,2)+date.substr(0,2);
}
bool isInDate(string startDateR,string endDateR,string startDate,string endDate){
    return startDate>startDateR && endDate<endDateR;
}
void activeloanindate(const Customer arr[],int size,string startDateR,string endDateR){
    if(size==0){
        cout<<"There are no costumers";
    }
    else{
        int number=0;
        LoanNode* n;
        for (int i=0;i<size;i++){
            if(!isEmpty(*arr[i].loans)){
            n=arr[i].loans->head;
            while(n){
                if(n->data.status=="active" && isInDate(normalize(startDateR),normalize(endDateR),normalize(n->data.startDate),normalize(n->data.endDate))){
                    number++;
                }
                n=n->next; 
            }
        }

    }
    cout<< number;
}
}
void highestloanamount(const Customer arr[],int size){
    if(size==0){
        cout<<"There are no costumers";
    }
    else{
        double higher=0.0;
        LoanNode* n;
        for (int i=0;i<size;i++){
            if(!isEmpty(*arr[i].loans)){
            n=arr[i].loans->head;
            while(n){
                if(n->data.principalAmount>higher){
                    higher=n->data.principalAmount;
                }
                n=n->next; 
            }
        }
    }
    cout << higher;
}
}
void highestbalance(const Customer arr[],int size){
    if(size==0){
    cout<<"There are no costumers";
    }
    else{
        double higher=arr[0].balance;
        for (int i=0;i<size;i++){
                if(arr[i].balance>higher){
                    higher=arr[i].balance;
                }
        }
        cout << higher;
    }
}
void lowestbalance(const Customer arr[],int size){
    if(size==0){
    cout<<"There are no costumers";
    }
    else{
        double lowest=arr[0].balance;
        for (int i=0;i<size;i++){
                if(arr[i].balance<lowest){
                    lowest=arr[i].balance;
                }
        }
        cout << lowest;
    }
}

void NumberofEmployees(int size){
    cout<< size;
}
void NumberofEmployeesbyBB(const Employee arr[],int size,int branches){
    int branchesArr[15];
    for(int i=0;i<branches;i++){
        branchesArr[i]=i+1;
    }
    if(size==0){
        cout<<"There are no employees";
    }
    else{
        int number=0;
        LoanNode* n;
        for (int i=0;i<size;i++){
            if(!isEmpty(*arr[i].loans)){
            n=arr[i].loans->head;
            while(n){
                if(n->data.status=="active" && isInDate(normalize(startDateR),normalize(endDateR),normalize(n->data.startDate),normalize(n->data.endDate))){
                    number++;
                }
                n=n->next; 
            }
        }

    }
}

}
int Main(){
    return 0;
}