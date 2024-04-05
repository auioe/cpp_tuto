#include <iostream>

template<typename T> T maxn(const T *, int);

int main(){
  int lint[6] = {1,2,3,4,5,6};
  double ldouble[4] = {3.4, 4.5, 5.6, 6.7};
  const char * lstring[] = {"hello", "to", "my", "chemical", "remance"};
  
  std::cout << maxn(lint, 6) << std::endl;
  std::cout << maxn(ldouble, 4) << std::endl;
  std::cout << maxn(lstring, 5) << std::endl;
}

template <char *>
const char * maxn(const char ** lstring, int n){
  int max_index=0, max_len=0;
  for(int i=0; i<n; i++){
    int j = 0;
    for(; lstring[i][j] != '\0'; j++);
    if (j > max_len){
      max_len = j;
      max_index = i;
    }
  }
  return lstring[max_index];
}

template <typename  T>
T maxn(const T * lt, int n){
  T max = lt[0];
  for(int i=1; i<n; i++){
    if(lt[i] > max){
      max = lt[i];
    }
  }
  return max;
}
