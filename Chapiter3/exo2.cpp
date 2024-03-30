
#include <iostream>


const float Inch2Meter = 0.0254;
const float Kilo2Pound = 2.2;

int main() {

    using namespace std;

    float input_height, input_weight = 0;
    cout << "Please input your height in inch: __\b\b";  // backspace
    cin >> input_height;
    cout << "Please input your weight in pound: __\b\b";
    cin >> input_weight;

    float height_meter = input_height * Inch2Meter;
    float weight_kilo = input_weight / Kilo2Pound;

    float bmi = weight_kilo / (height_meter * height_meter);

    cout << "Your BMI is " << bmi << endl;
    return 0;
}
