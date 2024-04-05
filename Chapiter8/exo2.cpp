#include <iostream>
#include <cstring>
struct CandyBar{
  char *mark;
  float weight;
  int cal;
};

void set_val(CandyBar &, const char * ="Millennium Munch", double=2.85, int=350);
void show(const CandyBar &);

int main(){
  CandyBar cb;
  set_val(cb);
  show(cb);

  set_val(cb, "M&M", 3.14, 999);
  show(cb);
}



void set_val(CandyBar & candy, const char * mark, double weight, int cal){
  strcpy(candy.mark, mark);
  candy.weight = weight;
  candy.cal = cal;
}

void show(const CandyBar & candy){
  using namespace std;
  cout << "CandyBar from " << candy.mark << " , it weights " << candy.weight
    << " and contains " << candy.cal << " calories." << endl;
}
