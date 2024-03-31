#include <iostream>
#include <string>

void record_year(int *sellings);

using namespace std;
int main(){
    int total_sellings[3][12];
    int res = 0;
    for(int i=0; i<3; i++){
        cout << "Please enter numbers for " << i+1 << "th year:"<< endl;
        record_year(total_sellings[i]); 
    }

    for(int i=0; i<3;i++){
        int total_year = 0;
        for(int j=0; j<12; j++){
            total_year += total_sellings[i][j];
        }
        cout << "Year " << i+1 << " sold " << total_year << "books" << endl;
        res += total_year;
    }
    cout << "These years, " << res << " books are sold" << endl;
}

void record_year(int *sellings){
    string months[] = {
        "Jan", "Fab", "Mar", "Apr", "May", "Jun",
        "July", "Aug", "Sept", "Oct", "Nov", "Dec"
    };

    for(int i=0; i < 12; i++){
        cout << "Please enter selling num in " << months[i] << ":";
        cin >> sellings[i];
    }

    int total = 0;
    for(int j=0; j<12; j++){
        total += sellings[j];
    }
    cout << "This year sold " << total << " books" << endl;
}