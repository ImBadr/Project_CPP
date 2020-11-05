/**
 * @author Badr TADJER
 * @author Alicia BENIDDIR
 * @date 31/10/2020
 */

#include "U.h"

U::U(string name) : _name(move(name)) {}

U::U(const U &u){
    this->_name = u._name;
}

U::~U() {
    cout << this->_name << endl;
    delete this;
}

const string &U::getName() const {
    return _name;
}
