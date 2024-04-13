#include <iostream>
#include "sales.h"

namespace SALES{
    void setSales(Sales &s, const double ar[], int n){
        double sum = 0.0;
        for(int i = 0; i < n; ++i){
            if(i < n){
                s.sales[i] = ar[i];
                sum += ar[i];
            }else{
                s.sales[i] = 0.0;
            }
            if(i == 0){
                s.max = ar[0];
                s.min = ar[0];
            }
            if(ar[i] > s.max){
                s.max = ar[i];
            }
            if(ar[i] < s.min){
                s.min = ar[i];
            }
        }

        s.average = sum / n;
    }

    void setSales(Sales &s){
        using namespace std;
        double sum = 0.0;
        for(int i = 0; i < SALES::QUATERS; ++i){
            cout << "Please enter the sales for " << i+1 << "th quater:";
            cin >> s.sales[i]; 
            sum += s.sales[i];
            if(i == 0){
                s.max = s.sales[i];
                s.min = s.sales[i];
            }else{
                if(s.sales[i] > s.max){
                    s.max = s.sales[i];
                }
                if(s.sales[i] < s.min){
                    s.min = s.sales[i];
                }
            }
        }
        s.average = sum / SALES::QUATERS;
    }

    void showSales(const Sales &s){
        using namespace std;
        for(int i = 0; i < SALES::QUATERS; ++i){
            cout << "Sales for " << i+1 << "th quater: " << s.sales[i] << endl;
        }
        cout << "Average: " << s.average << endl;
        cout << "Max: " << s.max << endl;
        cout << "Min: " << s.min << endl;
    }
}
