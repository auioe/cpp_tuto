#include <iostream>

template <typename T> T max5(T [5]);

int main(){
  int lint[] = {1,2,3,4,5};
  double ldouble[] = {1.0, 2.2, 3.3, 4.4, 5.5};

  std::cout << "Max int is: "<<max5<int>(lint)<<std::endl;
  std::cout << "Max double is: "<<max5<double>(ldouble)<<std::endl;
}

template<typename T>
T max5(T t[5]){
  T max = t[0];
  for(int i=1; i<5; i++){
    if(t[i] > max){
      max = t[i];
    }
  }
  return max;
}
