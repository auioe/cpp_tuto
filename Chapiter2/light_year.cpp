#include <iostream>
using namespace std;
double light_year_to_ast_unit(double light_year);

int main()
{
    using namespace std;
    double light_year;
    cout << "Please enter number of the light year: ";
    cin >> light_year;
    cout << light_year << " light year = " << light_year_to_ast_unit(light_year) << " astronomical units" << endl;
}

double light_year_to_ast_unit(double light_year){
    return light_year * 63240;
}