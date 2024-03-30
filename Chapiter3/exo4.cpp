#include <iostream>

int main(){
    int seconds;
    using namespace std;
    cout << "Enter the number of seconds:";
    cin >> seconds;

    int second, minute, hour, day;
    int temp = seconds;
    second = seconds % 60;
    seconds = seconds / 60;
    minute = seconds % 60;
    seconds = seconds / 60;
    hour = seconds % 24;
    day = seconds / 24;

    cout << temp << " seconds = ";
    if (day > 0){
        cout << day << " days,";
    }
    if (hour > 0){
        cout << hour << " hours,";
    }
    
    if (minute > 0){
        cout << minute << " minutes,";
    }
    if (second > 0){
        cout << second << " seconds,";
    }
    cout << "\b\n";

}