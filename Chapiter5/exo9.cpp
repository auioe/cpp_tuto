#include <iostream>
#include <string>

int main(){
    using namespace std;

    int count = 0;

    string word = "";

    cout << "Enter words (to stop, type the word done): " << endl;
    while(word != "done"){
        cin >> word;
        count += 1;
    }
    
    cout << "You enterd a total of " << count - 1 << " words" << endl;
    return 0;
}