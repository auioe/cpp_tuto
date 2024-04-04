#include <iostream>
using namespace std;


struct box{
  char maker[40];
  float height;
  float width;
  float length;
  float volume;
};

void show(box);
void cal_vol(box *);

int main(){
    box mybox = {
      "lingfeng", 10, 2, 5
    };
    cal_vol(&mybox);
    show(mybox);
}

void show(box box){
  cout << "BOX:\n\tmaker:"<< box.maker;
  cout << "\n\theight:" << box.height
      << "\n\twidth:" << box.width
      << "\n\tlength:" << box.length
      << "\n\tvolume:" << box.volume << endl;
}

void cal_vol(box *box){
  box->volume = box->height * box->length * box->width;
}
