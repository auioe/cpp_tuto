#include <iostream>
#include <array>
const int ArSize = 100; // example of external declaration
int main()
{
    using namespace std;
    array<long double, ArSize> factorials = {1, 1};
    for (int i = 2; i < ArSize; i++){
        factorials[i] = factorials[i-1] * i;
    }
    cout << "100! = " << factorials[99] << endl;
}