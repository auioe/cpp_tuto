#include <iostream>
#include <climits>

int main(){
    using namespace std;
    int a = 64;
    int hexa = 0x6a;
    int octa = 064;

    cout << "int of 64: " << a << endl;
    cout << "int hex of 64: " << hexa << endl;
    cout << "int oct of 64: " << octa << endl;
    
    cout << "int of 64: " << a << endl;
    cout << hex;
    cout << "int hex of 64: " << hexa << endl;
    cout << oct;
    cout << "int oct of 64: " << octa << endl;
}