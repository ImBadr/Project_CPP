/**
 * @author Badr TADJER
 * @author Alicia BENIDDIR
 * @date 30/10/2020
 */

#include "Complex.h"

Complex::Complex(int imaginary, int reel) {
    this->_imaginary = imaginary;
    this->_real = reel;
}

Complex::~Complex()= default;

Complex Complex::operator+(const Complex &c) const {
    return Complex(this->_imaginary + c._imaginary, this->_real + c._real);
}

Complex Complex::operator-(const Complex &c) const {
    return Complex(this->_imaginary - c._imaginary, this->_real - c._real);
}

Complex Complex::operator*(const Complex &c) const {
    return Complex(this->_imaginary * c._imaginary, this->_real * c._real);
}

Complex Complex::operator/(const Complex &c) const {
    if (c._imaginary == 0 || c._real == 0 || this->_imaginary == 0 || this->_real == 0){
        cerr << "Division / by 0 impossible" << endl;
        exit(-1);
    }
    return Complex(this->_imaginary / c._imaginary, this->_real / c._real);
}

Complex Complex::operator=(const Complex &c) const {
    return Complex(c._imaginary, c._real);
}

Complex Complex::operator<<(const Complex &c) const {
    return Complex(this->_imaginary << c._imaginary, this->_real << c._real);
}

Complex Complex::operator>>(const Complex &c) const {
    return Complex(this->_imaginary >> c._imaginary, this->_real >> c._real);
}

void Complex::toString() const {
    cout << this->_imaginary << ".i + " << this->_real << endl;
}
