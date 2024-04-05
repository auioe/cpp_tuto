#include <cctype>
#include <iostream>
#include <string>

using namespace std;
void to_upper(string &);
int main(){
  string  input;
  cout << "Enter a string (q to quit):" ;
  while (getline(cin, input) and input != "q"){
    to_upper(input);
    cout << input <<endl;
    cout << "Next string (q to quit):";
  }
  cout << "Bye" << endl;
}

void to_upper(string & str){
  for(int i=0; str[i]!='\0'; i++){
    str[i] = toupper(str[i]);
  }
}
