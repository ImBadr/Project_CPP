/**
 * @author Badr TADJER
 * @author Alicia BENIDDIR
 * @date 31/10/2020
 */

#include "A.h"

A::A(const string &name, int value) {
    this->_name = name;
    this->_value = value;
}

A::A(const A &a) {
    this->_name = a._name;
    this->_value = a._value;
}

A::~A() = default;

void A::toString() {
    cout << "Name : " << this->_name << endl;
    cout << "Value : " << this->_value << endl;
}
