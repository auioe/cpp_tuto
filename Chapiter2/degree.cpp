#include <iostream>
using namespace std;
float celsius_to_fehrenheit(float dgree);

int main()
{
    using namespace std;
    float cel_dgree;
    cout << "Please enter a celsius value: ";
    cin >> cel_dgree;
    cout << cel_dgree << "degree Celsius is " << celsius_to_fehrenheit(cel_dgree) << " degree Fehrenheit" << endl;
}

float celsius_to_fehrenheit(float dgree){
    return dgree * 1.8 + 32.0;
}