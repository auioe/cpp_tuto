#include <iostream>
#include <array>
#include <cmath>

int main(){
    using namespace std;
    array<float, 3> scores;

    cout << "First score:" << endl;
    cin >> scores[0];

    cout << "Second score:" << endl;
    cin >> scores[1];

    cout << "Third score:" << endl;
    cin >> scores[2];

    cout << "Average score of " << scores.size() << " records is " << (scores[0] + scores[1] + scores[2]) / 3 << endl;
}