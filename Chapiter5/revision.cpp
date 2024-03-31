#include <iostream>

using namespace std;

int main(){
    int j;
    for (j = 0; j<5; j++)
        cout << j;
        cout << endl;

    int i;
    for (i = 0; i < 11; i+=3)
        cout << i;
    cout << endl << i << endl;

    j = 5;
    while (++j < 9){
        cout << j++ << endl;
    }

    int k = 8;
    do
    {
        cout << "k = " << k << endl;
    } while (k++ < 5);
    
    k = 1;
    while (k <= 64){
        cout << k << endl;
        k <<= 1;
    }
}