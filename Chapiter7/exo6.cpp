#include <iostream>
using namespace std;
int fill_array(double *, int);
void show_array(double *, int);
void reverse_array(double *, int);


int main(){
  int max_size = 10;
  int real_size;
  double data[max_size];

  real_size = fill_array(data, max_size);
  show_array(data, real_size);

  reverse_array(data + 1, real_size - 2);
  show_array(data, real_size);
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

void show_array(double *data, int size){
  for(int i=0; i<size; i++){
    cout << data[i] << ", ";
  }
  cout << "\b\b \n";
}

void reverse_array(double *data, int size){
  double temp;
  for (int i=0,j=size-1; i<j; i++, j--){
    temp = data[i];
    data[i] = data[j];
    data[j] = temp;
  }
}
