#include <iostream>

double harmonic_mean(double, double);


int main(){
  using namespace std;
  double a, b;
  cout << "Please enter 2 numbers: " << endl;
  while(cin >> a >> b and a!=0 and b!=0){
    cout << "The harmonic mean of "<< a << " and " <<b << " is "<< harmonic_mean(a, b) <<endl;
  }
  cout << "Exiting" <<endl;
}

double harmonic_mean(double a, double b){
  return 2.0 * a * b / (a + b);
}
