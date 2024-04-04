#include <iostream>
#include <string>
#include <fstream>

struct Patron{
  std::string name;
  double amount;
};

int main(){
  using namespace std;
  int count;

  ifstream inFile;
  inFile.open("./patrons");  
  
  inFile >> count;
  inFile.get();
  Patron *patron_list = new Patron[count];    
  
  for (int i=0; i<count;i++){
    if(inFile.bad()){
      cout << "Failed to read "<< i+1 <<"th record, exiting..."<<endl;
      return 0;
    }
    getline(inFile, patron_list[i].name);
    inFile >> patron_list[i].amount; 
    inFile.get();
  }

  cout << "Following is the list of Grand Patrons: " << endl;
  int list_count = 0;
  for(int i=0; i< count; i++){
    if(patron_list[i].amount > 10000){
      cout << patron_list[i].name << endl;
      list_count += 1;
    }
  }
  if(list_count == 0){
    cout << "None" << endl;
  }

  cout << "Following is the list of other Patrons: " << endl;
  list_count = 0;
  for(int i=0; i< count; i++){
    if(patron_list[i].amount <= 10000){
      cout << patron_list[i].name << endl;
      list_count += 1;
    }
  }
  if(list_count == 0){
    cout << "None" << endl;
  }
}
