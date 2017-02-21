#include <iostream>
using namespace std;

template <typename T> 
class Shape {
 protected: 
  T width;
  T height;
 public:
  T getWidth() const { return width; }
  T getHeight() const { return height; }
  void setWidth(T width) { this->width = width;}
  void setHeight(T height) { this->height = height;}
};

template <typename T> 
class Rectangle: public Shape<T> {
 public:
  void print() const { cout << "width = " << width; }
  //T getArea() { return width*height; }
};

int main () {
  Rectangle<double> rect;
  rect.setWidth(1.0);
  rect.setHeight(2.0);
  rect.print();
  //cout << "V = " << rect.getArea() << endl;

  return 0;
}


