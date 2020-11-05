/**
 * @author Badr TADJER
 * @author Alicia BENIDDIR
 * @date 28/10/2020
 */

#include "Complex.h"

Complex::Complex(int imaginary, int real) {
    this->_imaginary = imaginary;
    this->_real = real;
}
Complex::~Complex(){
    cout << "Destructor" << endl;
}