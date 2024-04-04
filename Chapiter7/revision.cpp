#include <iostream>

void igor();
float tofu(int);
double mpg(double, double);
long summation(long [], int);
double doctor(const char*);

struct boss{};
void ofcourse(boss);

struct map{};
char * plot(map *);

struct applicant{
  char name;
  int credit_ratings[3];
};

void update_all(int *, int, int);
void update_all_2(int *, int *, int);
double max_double(double *, int);
int replace(char *, char, char);

int judge(int (const char *));
void show_applicant(applicant);
void show_applicant_2(applicant *);

void f1(applicant *a);
const char * f2(const applicant * a1, const applicant *a2);

typedef void (*p1)(applicant *a);
typedef const char * (*p2) (const applicant * a1, const applicant * a2);

int main(){
  int size = 10;
  int *rec = new int[size];
  update_all(rec, size , 10);
  update_all_2(rec, rec+size, 2);
  for (int i=0; i<size; i++){
    std::cout << rec[i] << std::endl;
  }
  double data[] = {1.0, 2.0, 33.1, 3.14, 125.5};
  std::cout << max_double(data, 5) << std::endl;

  char str[] = "aaa";
  int res;
  res = replace(str, 'a', 'b');
  std::cout << str << " replace "<< res << std::endl;

  auto *ap = new p1[5];
  auto *pa = new p2[10];
}

void update_all(int *data, int size, int val){
  for(int i=0; i<size; i++)
    data[i] = val;
}

void update_all_2(int *start, int *end, int val){
  for(;start != end;start++){
    *start = val;
  }
}

double max_double(double *data, int size){
  double max=data[0];
  for(int i=1; i<size; i++){
    if(data[i] > max){
      max = data[i];
    }    
  }
  return max;
}

int replace(char *str, char c1, char c2){
  int res = 0;
  for(int i=0; str[i] != '\0'; i++){
    if(str[i] == c1){
      str[i] = c2;
      res++;
    }
  }
  return res;
}

void show_applicant(applicant app){
  std::cout << "Name: " << app.name << ", Credit ratings:";
  for(int i=0; i<3;i++){
    std::cout << app.credit_ratings[i] << " ";
  }
  std::cout << std::endl;
}

void show_applicant_2(applicant *app){
  std::cout << "Name: " << app->name << ", Credit ratings:";
  for(int i=0; i<3;i++){
    std::cout << app->credit_ratings[i] << " ";
  }
  std::cout << std::endl;
}
