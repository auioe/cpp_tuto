#include <iostream>
#include <string>



struct CandyBar{
    std::string mark;
    float weight;
    int calory;
};

int main(){
    CandyBar snack = {
        "Mocha Munch", 2.3, 350
    };
    std::cout << "mark: " << snack.mark 
            << ", weight: " << snack.weight
            << ", calory: " << snack.calory
            << std::endl;
}