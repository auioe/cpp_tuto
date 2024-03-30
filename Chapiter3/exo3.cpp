#include <iostream>

const double FMINUTE = 1.0 / 60;
const double FSECOND = 1.0 / (60 * 60);

int main() {

    using namespace std;

    int degree, min, sec = 0;
    cout << "Enter a latitude in degrees, minutes and seconds:" << endl;  // backspace
    cout << "First, enter the degrees: ";
    cin >> degree;
    cout << "Next, enter the minute of arc: ";
    cin >> min;
    cout << "Finally, enter the seconds of arc: ";
    cin >> sec;

    double res;
    res = FMINUTE * min + FSECOND * sec + degree;
    cout << degree << " degrees, " << min << " minutes, " << sec << " seconds = " << res << " degrees" << endl;
    return 0;
}