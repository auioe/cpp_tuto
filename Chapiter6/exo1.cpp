#include <iostream>
#include <cctype>

int main(){
    using namespace std;

    char ch;
    while ((ch = cin.get()) != '@'){
        if (isdigit(ch)) continue;
        else if (isupper(ch)) ch = tolower(ch);
        else if (islower(ch)) ch = toupper(ch);
        cout << ch;
    }
    cout << "Exiting..." << endl; 
}