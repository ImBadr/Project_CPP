/**
 * @author Badr TADJER
 * @author Alicia BENIDDIR
 * @date 28/10/2020
 */

#include "Complex.h"

Complex::Complex(int imaginary, int real) {
    cout << "Constructor" << endl;
    this->_imaginary = imaginary;
    this->_real = real;
}

Complex::Complex(Complex const &complex) {
    cout << "Constructor by copy" << endl;
    this->_imaginary = complex.getImaginary();
    this->_real = complex.getReal();
}

Complex::~Complex() {
    cout << "Destructor" << endl;
}

void Complex::setReal(int real) {
    _real = real;
}

void Complex::setImaginary(int imaginary) {
    _imaginary = imaginary;
}

int Complex::getReal() const {
    cout << "Getter _real" << endl;
    return this->_real;
}

int Complex::getImaginary() const {
    cout << "Getter _imaginary" << endl;
    return _imaginary;
}

void Complex::addition(int imaginary, int real) {
    setImaginary(this->getImaginary() + imaginary);
    setReal(this->getReal() + real);
}

void Complex::subtraction(int imaginary, int real) {
    setImaginary(this->getImaginary() - imaginary);
    setReal(this->getReal() - real);
}

void Complex::division(int imaginary, int real) {
    if (imaginary == 0 || real == 0 || this->getImaginary() == 0 || this->getReal() == 0) {
        cerr << "Division par 0 impossible" << endl;
        return;
    }
    setImaginary(this->getImaginary() / imaginary);
    setReal(this->getReal() / real);
}

void Complex::multiplication(int imaginary, int real) {
    setImaginary(this->getImaginary() * imaginary);
    setReal(this->getReal() * real);
}

void Complex::modulo(int imaginary, int real) const {
    cout << sqrt(pow(this->getImaginary() + imaginary, 2) + pow(this->getReal() + real, 2)) << endl;
}

void Complex::entry() {
    cout << "Please enter an imaginary : ";
    cin >> this->_imaginary;
    cout << "Please enter a real : ";
    cin >> this->_real;
}

void Complex::toString() const {
    cout << this->_real << "+" << this->_imaginary << ".i" << endl;
}
