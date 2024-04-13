#include <iostream>
#include <cstring>
#include "golf.h"

using namespace std;

const int MAX_COUNT = 3;

int main()
{
    golf golf[MAX_COUNT];
    char name[Len];
    int hc;
    for (int i = 0; i < MAX_COUNT; i++) {
        cout << "Please enter name of " << i+1 << "th golf:";
        cin >> name;
        cout << "Please enter handicap:";
        cin >> hc;
        setgolf(golf[i], name, hc);
        if(!setgolf(golf[i])){
            break;
        }
        showgolf(golf[i]);
    }
    return 1;
}

void setgolf(golf & g, char const * name, int hc){
    strcpy(g.fullname,name);
    g.handicap = hc;
}

int setgolf(golf & g){
    return g.fullname[0] == '\0' ? 0 : 1;
}

void handicap(golf & g, int hc){
    g.handicap = hc;
}

void showgolf(const golf & g){
    cout << g.fullname << ":\t" << g.handicap << endl;
}