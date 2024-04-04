#include <iostream>
#include <ostream>

double add(double, double);
double multiply(double, double);
double minus(double, double);
double calculate(double, double, double (*op)(double, double));

int main_1(){
  double a, b;
  std::cout << "Please enter 2 numbers, split by space: ";
  while(std::cin >> a >>b){
    std::cout << "sum of " << a << " and "<< b <<" is " << calculate(a, b, add) << std::endl;
    std::cout << "product of " << a << " and "<< b <<" is " << calculate(a, b, multiply) << std::endl;
    std::cout << "Next tuple: ";
  }
 return 1; 
}

int main(){
  double a, b;
  double (*fn[3])(double, double) = {add, multiply, minus};
  std::cout << "Please enter 2 numbers, split by space: ";
  while(std::cin >> a >>b){
    for (int i=0; i<3; i++){
      std::cout << calculate(a, b, fn[i]) << std::endl;
    }
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

double minus(double a, double b){
  return a - b;
}
