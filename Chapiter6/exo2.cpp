#include <iostream>
#include <array>

int main(){
    using namespace std;
    array<double, 10> donations;
    int i = 0;

    while(i < 10 && cin >> donations[i]){
        i++;
    }

    double sum = 0.0;
    for (int j=0; j<=i; j++){
        sum += donations[j];
    }
    
    cout << i << " donations in total, the average is " << sum / i << endl;
}