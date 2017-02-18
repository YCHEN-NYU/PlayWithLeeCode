#include <iostream>
#include <iomanip>
using namespace std;

template <typename T> 
class Box {
 private:
  T length;
  T width;
  T height;
  T volume;

 public:
  static int NumberOfBox;
  explicit Box(T length, T width, T height);
  void print() const;
};

template <typename T>
int Box<T>::NumberOfBox = 0;

template <typename T>
Box<T>::Box(T length, T width, T height) {
  ++NumberOfBox;
  this->length = length; 
  this->width = width;
  this->height = height;
  volume = length*width*height;
}


template <typename T>
void Box<T>::print() const {
  cout << "Box: " << length << "x" << width << "x" << height << endl;
  cout << "Volume: " << setw(3) << volume << endl; 
}

int main() {
  Box<double> PaperBox(1.0, 1.5, 2.0);
  Box<double> AnotherPaperBox(2.5, 3.5, 4.0);
  PaperBox.print();
  AnotherPaperBox.print();

  return 0; 
}




