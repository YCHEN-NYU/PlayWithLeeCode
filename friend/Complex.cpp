#include "Complex.h"

template <typename T>
ostream & operator << (ostream & out, const Complex<T> & c) {
    out << "real-part: " << c.real << endl;
    out << "imag-part: " << c.imag << endl;
    return out;
}

// TODO
/*
template <typename T>
istream & operator >> (istream & in, Complex<T> & c) {
    cout << "real-part <- "; 
    in >> c.real;
    cout << "imag-part <- ";
    in >> c.imag;
    return in;
}*/
