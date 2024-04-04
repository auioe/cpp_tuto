#include <iostream>

int main(){
    using namespace std;
    cout << "Please enter one of following choices:\n"
        << "c) carnivore\t" << "p) pianist\n"
        << "t) tree \t" << "g) game\n";

    char input;
    while(cin.get(input) && input != 'q'){
        switch(input){
            case 'c': cout << "C is carnivore.\n" << endl; break;
            case 'p': cout << "P is pianist.\n" << endl; break;
            case 't': cout << "T is tree.\n" << endl; break;
            case 'g': cout << "G is game.\n" << endl; break;
            default : cout << "Please enter a, c, p, t or g: ";
        }
        cin.get();
    }
}