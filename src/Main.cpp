// main.cpp
#include <iostream>
#include "ComplexNumber.h"

using namespace std;

int main() {
    // Variables for complex numbers
    double real1, imaginary1, real2, imaginary2;

    // Prompt the user to enter the first complex number
    cout << "Enter the real part of the first complex number: ";
    cin >> real1;
    cout << "Enter the imaginary part of the first complex number: ";
    cin >> imaginary1;

    // Create the first ComplexNumber object
    ComplexNumber c1(real1, imaginary1);

    // Prompt the user to enter the second complex number
    cout << "Enter the real part of the second complex number: ";
    cin >> real2;
    cout << "Enter the imaginary part of the second complex number: ";
    cin >> imaginary2;

    // Create the second ComplexNumber object
    ComplexNumber c2(real2, imaginary2);

    // Add the two complex numbers
    ComplexNumber sum = c1.add(c2);

    // Display the complex numbers and their sum
    cout << "First complex number: ";
    c1.display();
    cout << "Second complex number: ";
    c2.display();
    cout << "Sum of the complex numbers: ";
    sum.display();

    return 0;
}
