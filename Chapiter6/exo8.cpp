#include <fstream>
#include <iostream>
#include <string>
int main(){
  using namespace std;
  string fpath;
  cout << "Please enter the path of file to read:"<<endl;
  cin >> fpath;

  ifstream inFile;

  inFile.open(fpath);
  if(!inFile.is_open()){
    cout << "Failed to open file" << fpath;
    return 0;
  }

  int char_count = 0;
  char c;
  while (inFile.good()) {
    inFile.get(c);
    char_count++;
  }
  cout << char_count << " charactor(s) found in file" << endl;
}
