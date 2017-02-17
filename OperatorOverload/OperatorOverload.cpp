#include <iostream>
#include <iomanip>
using namespace std;

class Complex {
    friend ostream &operator<<(ostream &out, Complex c);
    friend istream &operator>>(istream &in, Complex &c);
    private:
        double real;
        double imag;
    public:
        Complex(): real(0.0), imag(0.0) {};
        explicit Complex(double real, double imag) {
            this->real = real;
            this->imag = imag; }
        void print() const { 
            cout << "(" << setw(4) << real
                 << "," << setw(4) << imag
                 << ")" << endl; }
        Complex operator+(Complex &other);
};

Complex Complex::operator+(Complex &other) {
    return Complex(real + other.real, imag + other.imag);
}

ostream &operator<<(ostream &out, Complex c) {
    out << "real-part: " << setw(6) << c.real << endl;
    out << "imag-part: " << setw(6) << c.imag << endl;
    return out; }

istream &operator>>(istream &in, Complex &c) {
    cout << "enter the real-part: ";
    in >> c.real;
    cout << "enter the imag-part: ";
    in >> c.imag;
    return in; }

int main() {
    Complex V1(-1.7, 2.4), V2(3.5, 4);
    cout << V1;
    Complex V3;
    cin >> V3;
    cout << V3;
    return 0;
}
