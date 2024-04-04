#include <iostream>

int main(){
    int income;
    using namespace std;

    cout << "Please enter your income: ";
    while(cin >> income && income > 0){
        int tax = 0;
        if(income > 35000){
            tax += (income - 35000) * 0.2;
            income = 35000;
        }
        if (income > 15000){
            tax += (income - 15000) * 0.15;
            income = 15000;
        }

        if (income > 5000){
            tax += (income - 5000) * 0.1;
        }
        cout << "Total tax is " << tax << " tvarps." <<endl;
    }
    cout << "Exiting";
}