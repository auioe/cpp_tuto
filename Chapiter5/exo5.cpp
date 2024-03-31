#include <iostream>
#include <string>

int main(){
    using namespace std;
    string months[] = {
        "Jan", "Fab", "Mar", "Apr", "May", "Jun",
        "July", "Aug", "Sept", "Oct", "Nov", "Dec"
    };

    int sellings[12];

    for(int i=0; i < 12; i++){
        cout << "Please enter selling num in " << months[i] << ":";
        cin >> sellings[i];
    }

    int total = 0;
    for(int j : sellings){
        total += j;
    }
    cout << "This year sold " << total << " books" << endl;
}