#include <iostream>
using namespace std;
int fill_array(double *, int);
double sum_array(double *, int);
void reverse_array(double *, int);


int main(){
  int max_size = 10;
  int real_size;
  double data[max_size];

  real_size = fill_array(data, max_size);
  sum_array(data, real_size);

  reverse_array(data + 1, real_size - 2);
  sum_array(data, real_size);
}

int fill_array(double * data, int size){
  cout << "Please enter double values: ";
  int count = 0;
  for (int i=0; i<size; i++){
    if(cin >> data[i]){
      count++;
      cout << "Next number: ";
    }else{
      break;
    }
  }
  return count;
}

double sum_array(double *data, int size){
  double sum = 0.0;
  for(int i=0; i<size; i++){
    sum += data[i];
  }
  return sum;
}

void reverse_array(double *data, int size){
  double temp;
  for (int i=0,j=size-1; i<j; i++, j--){
    temp = data[i];
    data[i] = data[j];
    data[j] = temp;
  }
}
