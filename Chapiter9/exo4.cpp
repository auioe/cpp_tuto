#include <iostream>
#include "sales.h"

int main(){
    using namespace SALES;

    Sales s1, s2;
    double sells[] ={1.0, 2.0, 3.1, 4.2};
    setSales(s1, sells, 4);
    setSales(s2);

    showSales(s1);
    showSales(s2);
}