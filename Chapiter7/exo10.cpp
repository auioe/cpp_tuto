#include <iostream>
#include <ostream>

double add(double, double);
double multiply(double, double);
double calculate(double, double, double (*op)(double, double));

int main(){
  double a, b;
  std::cout << "Please enter 2 numbers, split by space: ";
  while(std::cin >> a >>b){
    std::cout << "sum of " << a << " and "<< b <<" is " << calculate(a, b, add) << std::endl;
    std::cout << "product of " << a << " and "<< b <<" is " << calculate(a, b, multiply) << std::endl;
    std::cout << "Next tuple: ";
  }
  
}


double add(double a, double b){
  return a + b;
}
double multiply(double a, double b){
  return a*b;
}
double calculate(double a, double b, double (*op) (double, double)){
  return op(a, b);
}
