/**
 * @author Badr TADJER
 * @author Alicia BENIDDIR
 * @date 28/10/2020
 */

#include "D.h"

D::D(const string &name, int value) {
    this->_name = name;
    this->_value = value;
    cout << "Constructor : " << this->_name << endl;
}

D::D(string name, const D &d) {
    this->_name = move(name);
    this->_value = d._value;
    cout << "Constructor : " << this->_name << endl;
}

D::~D() {
    cout << "Destructor : " << this->_name << endl;
}
