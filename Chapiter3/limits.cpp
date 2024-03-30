#include <iostream>
#include <climits>

int main(){
    using namespace std;
    int max_int = INT_MAX;
    short max_short = SHRT_MAX;
    long max_long = LONG_MAX;

    cout << "int size is : " << sizeof(max_int) << endl;
    cout << "short size is : " << sizeof(max_short) << endl;
    cout << "long size is : " << sizeof(max_long) << endl;

    
    cout << "int max is : " << max_int << endl;
    cout << "short max is : " << max_short << endl;
    cout << "long max is : " << max_long << endl;

    cout << "int min is:" << INT_MIN << endl;
     
}