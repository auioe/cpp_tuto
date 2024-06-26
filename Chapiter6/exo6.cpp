#include <iostream>
#include <string>

struct Patron{
  std::string name;
  double amount;
};

int main(){
  using namespace std;
  int count;
  cout << "Please enter the number of patrons: ";
  cin >>  count;
  cin.get();
  Patron *patron_list = new Patron[count];    
  
  for (int i=0; i<count;i++){
    cout << "Please enter the name of " << i+1 << "th patron:";
    getline(cin, patron_list[i].name);
    cout << "Please enter the donation of " << i+1 << "th patron:";
    cin >> patron_list[i].amount; 
    cin.get();
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
