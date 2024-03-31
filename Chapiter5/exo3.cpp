#include <iostream>

int main(){
    int sum, input;
    using namespace std;
    sum = input = 0;
    do{
        cout << "Enter a number, 0 to quit: ";
        cin >> input;
        sum += input;
        cout << "Current sum is: " << sum << endl;
    }while(input != 0);

    cout << "The sum of your inputs is: " << sum << endl;
}