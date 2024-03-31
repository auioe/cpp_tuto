#include <iostream>
using namespace std;

void loop1();
void loop2();

int main(){
//    loop1();
    loop2();
    return 0;
}

void loop2(){
    char ch;
    cout << "Please enter char: ";
    ch = cin.get();
    while (ch != EOF){
        cout << ch;
        ch = cin.get();
    }
    cout << "Exiting..." << endl;
}

void loop1(){
    char ch;
    cout << "Please enter char: ";
    cin.get(ch);
    while(cin.fail() == false){
        cout << ch;
        cin.get(ch);
    }
    cout << "Exiting..." << endl;
}