#include <iostream>
#include <string>

using namespace std;

struct Car{
    string maker;
    int year;
};

Car read_car();

int main(){
    int count;
    cout << "Enter the number of cars:";
    cin >> count;
    cin.get();

    Car *collection = new Car[count];

    for(int i=0; i<count; i++){
        cout << "Car #" << i+1 << endl;
        collection[i] = read_car();
    }

    cout << "Here is your collection:" << endl;

    for(int i=0; i<count; i++){
        cout << collection[i].year << " " << collection[i].maker << endl;
    }
    return 0;
}

Car read_car(){
    Car temp_car;
    cout << "Please enter the maker: ";
    getline(cin, temp_car.maker);
    cout << "Please enter the year made: ";
    cin >> temp_car.year;
    cin.get();
    return temp_car;
}