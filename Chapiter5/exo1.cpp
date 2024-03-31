#include <iostream>

int main(){
    int a, b;
    int res = 0;

    using namespace std;
    cout << "Enter 2 numbers:";
    cin >> a;
    cin >> b;

    for (; a<=b; a++){
        res += a;
    }
    cout << "Result is: " << res << endl; 
}