#include <iostream>
using namespace std;

struct fish{
    string type;
    int weight;
    float length;
};

enum Response{
    Yes = 1,
    No = 0,
    Maybe = 2,
};

int main(){
    char actor[30];
    short betsie[100];
    float chuck[13];
    long double dipsea[64];
    int odd_list[] = {1,2,3,4,5};
    int even = betsie[0] + betsie[99];
    
    float ideas[] = {1, 2, 3};
    cout << ideas[1] << endl;

    char str[] = "cheeseburger";
    fish my_fish = {
        "bigfish",
        10,
        1.25
    };

    double ted = 1.5;
    double *pted = &ted;

    cout << *pted << endl;

    float treacle[10] = {1,2,3,4,5,6,7,8,9,10};

    float *pf = treacle;
    cout << "first element: " << *pf << ", last element: " << *(pf + 9) << endl;

    int llength;

    cout << "Enter the length of list: ";
    cin >> llength;

    int *dyn_list = new int[llength];

    cout << "created: " << dyn_list[0] << dyn_list[llength - 1] << endl;

    cout << *(int *)"Home of the jolly bytes!" << endl; // 显示, 由于字符串被强转为了int指针， cout尝试输出指针所指向地址的int值, 1701670728
    cout << (int *)"Home of the jolly bytes!" << endl; // 不显示, 由于字符串被强转为了int指针， cout尝试输出指针的地址， 所以多次执行结果不一致
    
    fish *my_second_fish = new fish;

    cout << "My fish, type:" << my_second_fish->type << ",weight: " << my_second_fish->weight << ", length: " << my_second_fish->length << endl;

    delete my_second_fish;
    cout << "done" << endl; 
}