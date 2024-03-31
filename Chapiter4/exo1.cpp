#include <iostream>


int main(){
    using namespace std;
    string first_name, last_name;
    char grade;
    int age;

    cout << "What is your first name:";
    getline(cin, first_name);

    cout << "What is your last name:";
    getline(cin, last_name);
    
    cout << "What letter grade do your deserve?";
    cin >> grade;

    cout << "What is your age:";
    cin >> age;
    
    cout << "name: " << last_name << ", " << first_name << endl;
    cout << "Grade: " << (char)(grade + 1) << endl;
    cout << "Age: " << age << endl;

}