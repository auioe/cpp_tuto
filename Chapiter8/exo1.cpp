#include <iostream>

void print(char *);
void print(char *, int);
int call_count = 0;

int main(){
  char string[] = "abcdefg";
  std::cout << "First print: \n";
  print(string);
  std::cout << "Second print: \n";
  for(int i=0; i<10; i++){
    std::cout << i+1 << "th call:"<<std::endl;
    print(string, i);
  }
}

void print(char * str){
  std::cout << str << std::endl;
}

void print(char * str, int n){
  call_count++;
  if(n != 0){
    for (int i=0; i<call_count; i++)
      std::cout <<str << std::endl;
  }
}
