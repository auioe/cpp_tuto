#include <iostream>
using namespace std;
void print_twice(string str);

int main()
{
    for(int i=0; i<2; i+=1){
        print_twice("Three blind mice");
        print_twice("See how they run");
    }
}

void print_twice(string str){
    std::cout << str << std::endl;
}