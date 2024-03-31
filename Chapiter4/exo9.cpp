#include <iostream>
#include <string>



struct CandyBar{
    std::string mark;
    float weight;
    int calory;
};

void print_snack(CandyBar *snack){
    std::cout << "mark: " << snack->mark 
            << ", weight: " << snack->weight
            << ", calory: " << snack->calory << std::endl;
}
int main(){
    CandyBar *snack = new CandyBar[3]{{
        "Mocha Munch", 2.3, 350
    },{
        "Coca cola", 4.5, 200
    },{
        "Crepe", 5.2, 100
    }};

    print_snack(snack);
    print_snack(snack + 1);
    print_snack(snack + 2);
}