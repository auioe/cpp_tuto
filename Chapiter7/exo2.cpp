#include <iostream>

int input(int *, int);
void show(int *, int);
double mean(int *, int);


int main(){
  int recs = 0, max_len=10;
  int scores[max_len];
  recs = input(scores, max_len);
  show(scores, recs);
  std::cout << "Average score is " << mean(scores, recs) << std::endl;  
}

int input(int *scores, int max_size){
  int i = 0;
  for (; i<max_size; i++){
    std::cout << "Please enter a score(-1 to quit): ";
    std::cin >> scores[i];
    if(scores[i] == -1){
      break;
    }
  }
  return i; 
}

void show(int *scores, int size){
  std::cout << "Scores are:" << std::endl;
  for (int i=0; i<size; i++){
    std::cout << scores[i] << std::endl;
  }
}

double mean(int *scores, int size){
  double sum = 0.0;

  for(int i=0; i<size; i++){
    sum += scores[i];
  }
  return sum / size;
}
