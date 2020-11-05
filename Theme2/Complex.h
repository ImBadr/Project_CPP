/**
 * @author Badr TADJER
 * @author Alicia BENIDDIR
 * @date 28/10/2020
 */

#ifndef _COMPLEX_H
#define _COMPLEX_H

#include <iostream>
#include <cstring>
#include<cmath>
using namespace std;

class Complex {
    int _real;
    int _imaginary;
public:
    explicit Complex(int imaginary = 0, int real = 0);
    Complex(Complex const &complex);
    ~Complex();

    int getReal() const;
    int getImaginary() const;
    void setReal(int real);
    void setImaginary(int imaginary);

    void addition(int imaginary = 0, int real = 0);
    void subtraction(int imaginary = 0, int real = 0);
    void multiplication(int imaginary = 0, int real = 0);
    void modulo(int imaginary, int real) const;
    void division(int imaginary, int real);

    void entry();
    void toString() const;


};
#endif // _COMPLEX_H
