#pragma once

#include <cmath>

template <typename T=float>
class Complex {
private:
    T real;
    T imag;
public:
	Complex(T real=0, T imag=0) {
		this->real = real;
		this->imag = imag;
	}
	
	static Complex fromExp(T radius, T angle) {
		Complex c = Complex(0, 0);
		c.real = radius * std::cos(angle);
		c.imag = radius * std::sin(angle);
		return c;
	}

	T getReal() {
		return real;
	}

	T getImag() {
		return imag;
	}

	void setReal(T real) {
		this->real = real;
	}

	void setImag(T imag) {
		this->imag = imag;
	}
	
	T getAbs() {
		return std::sqrt(std::pow(real, 2) + std::pow(imag, 2));
	}
	
	T getArg() {
		return std::atan2(imag, real);
	}
	
};
