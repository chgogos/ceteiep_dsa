#include <iostream>

using namespace std;

class Box {
public:
  // constructor declaration with default values
  Box(double l = 1, double w = 1, double h = 1) {
    length = l;
    width = w;
    height = h;
  };
  // member function
  double volume() { return length * width * height; }

private:
  // member data
  double length;
  double width;
  double height;
};

int main(int argc, char **argv) {
  Box b1(10, 5, 10);
  cout << "The volume is " << b1.volume() << endl;
  Box *pb = new Box();
  cout << "The volume is " << pb->volume() << endl;
  delete pb;
  return 0;
}
