/**
 * @author Badr TADJER
 * @author Alicia BENIDDIR
 * @date 29/10/2020
 */

#include "O.h"

O::O() {
    cout << "Constructor" << endl;
}

O::O(const string &name) {
    this->_name = name;
    cout << "Constructor : " << this->_name << endl;
}

O::~O() {
    cout << "Destructor : " << this->_name << endl;
}

const string &O::getName() const {
    return _name;
}
