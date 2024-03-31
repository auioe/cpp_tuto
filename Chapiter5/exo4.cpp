#include <iostream>

int main(){
    double daphne, cleo;
    daphne = cleo = 100;

    int year = 0;
    do{
        daphne += 10;
        cleo *=1.05;
        year += 1;
        std::cout << "Year " << year <<
            ": Daphne has " << daphne << "$, and Cleo has "
            << cleo << "$"<< std::endl;
    }while(daphne > cleo); 
}