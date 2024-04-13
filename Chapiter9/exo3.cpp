#include <iostream>
#include <new>
#include <cstring>

struct chaff{
    char dross[20];
    int slag;
};

chaff buffer[2];

int main(){
    using namespace std;
    chaff *p = new (buffer) chaff[2];
    chaff *p2 = new chaff[2];

    p[0].slag = 10;
    p2[0].slag = 10;
    strcpy(p[0].dross, "abcdefghijk");
    strcpy(p2[0].dross, "abcdefghijk");
    cout << &p[0] << endl;
    cout << &p2[0] << endl;
    cout << &buffer[0] << endl;

    p[1].slag = 20;
    p2[1].slag = 20;
    strcpy(p[1].dross, "lmnopqrstuvwxyz");
    strcpy(p2[1].dross, "lmnopqrstuvwxyz");
    cout << &p[1] << endl;
    cout << &p2[1] << endl;
    cout << &buffer[1] << endl;

    for(int i = 0; i < 2; i++){
        cout << &p[i] << endl;
        cout << p[i].dross << endl;
        cout << p[i].slag << endl;

        cout << &p2[i] << endl;
        cout << p2[i].dross << endl;
        cout << p2[i].slag << endl;
    }
}