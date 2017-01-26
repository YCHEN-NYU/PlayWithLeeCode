#ifndef COMPLEX_H
#define COMPLEX_H

template <typename T>
class MyComplex {
private:
	T real;
	T imag;
public:
	MyComplex(): real(0), imag(0) {}
	MyComplex(T real): real(real), imag(0) {};
	MyComplex(T real, T imag): real(real), imag(imag) {};

	T get_real() const { return real;}
	T get_imag() cosnt { return imag;}
	void set_real(T real) { this->real = real;}
	void set_real(T imag) { this->imag = imag;}

	complex& operator+=(complex z) { re+=z.real, imag+=z.imag; return *this; }
	complex& operator-=(complex z) { re-=z.real, imag-=z.imag; return *this; }
	complex& operator*=(complex); // defined out-of-class somewhere
	complex& operator/=(complex); // defined out-of-class somewhere


}