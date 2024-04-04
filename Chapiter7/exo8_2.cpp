//arrobj.cpp -- functions with array objects
#include <iostream>
#include <array>
#include <string>
const int Seasons = 4;
const char * Snames[] =
    {"Spring", "Summer", "Fall", "Winter"};

struct Expenses{
    double expenses[Seasons];  
};
void fill(Expenses *);
void show(const Expenses);
int main()
{
    Expenses exp;
    fill(&exp);
    show(exp);
    // std::cin.get();
    // std::cin.get();
    return 0;
}

void fill(Expenses *pa)
{
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << "Enter " << Snames[i] << " expenses: ";
        std::cin >> pa->expenses[i];
    }
}

void show(const Expenses da)
{
    double total = 0.0;
    std::cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << Snames[i] << ": $" << da.expenses[i] << '\n';
        total += da.expenses[i];
    }
    std::cout << "Total: $" << total << '\n';
}
