#include <iostream>
using namespace std;

#include <cstring>
struct stringy{
  char * str;
  int ct;
};
// prototypes for set(), show(), and show() go here
void set(stringy &, const char *);
void show(const stringy &, int = 1);
void show(const string, int=1);

int main()
{
  stringy beany;
  char testing[] = "Reality isn't what it used to be.";
  set(beany, testing); // first argument is a reference,
        // allocates space to hold copy of testing,
        // sets str member of beany to point to the
        // new block, copies testing to new block,
        // and sets ct member of beany
  show(beany); // prints member string once
  show(beany, 2); // prints member string twice
  testing[0] = 'D';
  testing[1] = 'u';
  show(testing); // prints testing string once
  show(testing, 3); // prints testing string thrice
  show("Done!");
  return 0;
}

void set(stringy & bean, const char * str){
  int i = 0;
  for(;str[i] != '\0'; i++);
  bean.str = new char[i+1];
  strcpy(bean.str, str);
}
void show(const stringy & bean, int n){
  for(int i=0; i<n;i++)
    cout << bean.str << endl;
}
void show(const string str, int n){
  for(int i=0; i<n; i++)
    cout << str << endl;
}
