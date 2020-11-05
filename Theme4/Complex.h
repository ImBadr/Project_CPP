/**
 * @author Badr TADJER
 * @author Alicia BENIDDIR
 * @date 30/10/2020
 */

#ifndef _COMPLEX_H
#define _COMPLEX_H

#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

class Complex {
    int _real;
    int _imaginary;
public:
    explicit Complex(int imaginary = 0, int reel = 0);
    ~Complex();

    Complex operator+(const Complex &c) const;
    Complex operator-(const Complex &c) const;
    Complex operator*(const Complex &c) const;
    Complex operator/(const Complex &c) const;
    Complex operator=(const Complex &c) const;
    Complex operator<<(const Complex &c) const;
    Complex operator>>(const Complex &c) const;

    void toString() const;

};
#endif // _COMPLEX_H
