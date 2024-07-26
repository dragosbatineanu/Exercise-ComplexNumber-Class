#include "ComplexNumber.h"
#include <iostream>

// Constructor to initialize complex number details
ComplexNumber::ComplexNumber(double r, double i) : real(r), imaginary(i) {}

// Setter methods
void ComplexNumber::setReal(double r) {
    real = r;
}

void ComplexNumber::setImaginary(double i) {
    imaginary = i;
}

// Getter methods
double ComplexNumber::getReal() const {
    return real;
}

double ComplexNumber::getImaginary() const {
    return imaginary;
}

// Method to add two complex numbers
ComplexNumber ComplexNumber::add(const ComplexNumber& other) const {
    return ComplexNumber(real + other.real, imaginary + other.imaginary);
}

// Method to display the complex number
void ComplexNumber::display() const {
    std::cout << real << " + " << imaginary << "i" << std::endl;
}

