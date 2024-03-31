#include <iostream>
#include <cstring>

int main(){
    using namespace std;

    int count = 0;

    char word[50] = "";

    cout << "Enter words (to stop, type the word done): " << endl;
    while(strcmp(word, "done") != 0){
        cin >> word;
        count += 1;
    }
    
    cout << "You enterd a total of " << count - 1 << " words" << endl;
    return 0;
}