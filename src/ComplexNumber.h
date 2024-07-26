#pragma once

class ComplexNumber {
private: 
	double real;
	double imaginary;

public:

	ComplexNumber(double r, double i);

	void setReal(double r);
	void setImaginary(double i);

	double getReal() const;
	double getImaginary() const;

	ComplexNumber add(const ComplexNumber& other) const;

	void display() const;
};