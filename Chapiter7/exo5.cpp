#include <iostream>

long long fact(int);

int main(){
  int input;
  std::cout << "Please enter a integer:";
  while(std::cin >> input){
    if(input < 0)break;
    std::cout << "The factoriel of " << input << " is " << fact(input) << std::endl;
    std::cout << "Next number:";
  }
  std::cout << "bye~~";
}

long long fact(int n){
  if (n == 0 or n == 1){
    return 1;
  }else{
    return n * fact(n-1);
  }
}
