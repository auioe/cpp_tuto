#include <iostream>
#include <cstring>

int main(){
    using namespace std;
    static int MAX_LEN = 128;
    char first_name[MAX_LEN];
    char last_name[MAX_LEN];
    char name[MAX_LEN * 2];

    cout << "Enter your first name: ";
    cin.getline(first_name, MAX_LEN);

    cout << "Enter your last name: ";
    cin.getline(last_name, MAX_LEN);    

    strcpy(name, first_name);
    strcat(name, ", ");
    strcat(name, last_name);

    cout << "Here's the information in the single string: " <<name << endl;
}