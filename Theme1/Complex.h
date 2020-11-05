/**
 * @author Badr TADJER
 * @author Alicia BENIDDIR
 * @date 28/10/2020
 */

#ifndef _COMPLEX_
#define _COMPLEX_

#include <iostream>

using namespace std;

class Complex {
    int _real;
    int _imaginary;
public:
    explicit Complex(int imaginary = 0, int real = 0);
    ~Complex();

    int getReal() const {
        cout << "Getter _real" << endl;
        return this->_real;
    }
    int getImaginary() const {
        cout << "Getter _imaginary" << endl;
        return this->_imaginary;
    }
};

#endif