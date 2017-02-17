#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
using namespace std;

template <typename T>
class Complex {
    friend ostream &operator<<(ostream & out, const Complex<T> & c);
    //friend istream &operator>>(istream & in, Complex<T> & c);
    private:
       T real;
       T imag;
    public:
       Complex(): real(0), imag(0) {};
       Complex<T> (T real, T imag) { this->real = real; this->imag = imag; }
       void print() const { cout << "(" << real << "," << imag << ")" << endl;}
};

#endif
