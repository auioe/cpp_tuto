#include <iostream>

const int strsize = 50;

struct bop{
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
};

int main(){
    bop people[2] = {
        {
            "huang lingfeng",
            "mr huang",
            "lingf33",
            0
        },
        {
            "jiang shan",
            "mr jiang",
            "crab",
            1
        }
    };
    using namespace std;
    char input;
    cout << "Benevolent Order of Programmers Report\n"
        << "a. display by name\tb. display by title\n"
        << "c. display by bopname\td. display by preference\n"
        << "q. quit\n"
        << "Enter your choice: ";

    while(cin.get(input) && input != 'q'){
        switch(input){
            case 'a':{
                for(int i=0; i<2;i++){
                    cout << people[i].fullname << endl;
                }
                break;
            }
            case 'b':{
                for(int i=0; i<2;i++){
                    cout << people[i].title << endl;
                }
                break;
            }
            case 'c':{
                for(int i=0; i<2;i++){
                    cout << people[i].bopname << endl;
                }
                break;
            }
            case 'd':{
                for(int i=0; i<2;i++){
                    switch(people[i].preference){
                        case 0:cout << people[i].fullname << endl;break;
                        case 1:cout << people[i].title << endl;break;
                        case 2:cout << people[i].bopname << endl;break;
                    }
                }
                break;
            }
            case 'q':
                cout << "Bye\n"; return 1;
            default:
                cout << "Unknown choice!\n";
        }
        cin.get();
        cout << "Next choice: ";
    }
}