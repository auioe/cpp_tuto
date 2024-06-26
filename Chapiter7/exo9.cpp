#include <iostream>
#include <cstring>

using namespace std;
const int SLEN = 10;
struct student{
  char fullname[SLEN];
  char hobby[SLEN];
  int ooplevel;
};


int getinfo(student pa[], int n);
void display1(student st);
void display2(const student * ps);
void display3(const student ps[], int n);

int main(){
  cout << "Enter class size: ";
  int class_size;
  cin >> class_size;
  while (cin.get() != '\n'){
    continue;
  }
  student * ptr_stu = new student[class_size];
  int entered = getinfo(ptr_stu, class_size);
  for(int i=0; i< entered; i++){
    display1(ptr_stu[i]);
    display2(&ptr_stu[i]);
  }
  display3(ptr_stu, entered);
  delete [] ptr_stu;
  cout << "Done\n";
  return 0;
}

int getinfo(student pa[], int n){
  int i;
  for(i=0; i<n; i++){
    cout << "Please enter the name of student:";
    cin.getline(pa[i].fullname, SLEN);
    if (pa[i].fullname[0] == '\0'){
      break;
    }
    cout << "Please enter the hobby:";
    cin.getline(pa[i].hobby, SLEN);

    cout << "Please enter ooplevel:";
    cin >> pa[i].ooplevel;
    cin.get();
  }
  return i;
}


void display1(student st){
  cout << st.fullname << "'s hobby is " << st.hobby <<", with ooplevel" << st.ooplevel << endl;
}
void display2(const student * ps){
  cout << ps->fullname << "'s hobby is " << ps->hobby <<", with ooplevel" << ps->ooplevel << endl;
}
void display3(const student ps[], int n){
  for(int i=0; i<n; i++){
    display2(ps + i);
  }
}
