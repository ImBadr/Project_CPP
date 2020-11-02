#include "O.h"

O::O() {
    cout << "Constructor : O" << endl;
}

O::O(const string &name) {
    this->name = name;
    cout << "Constructor : " << this->name << endl;
}

O::~O() {
    cout << "Destructor : " << this->name << endl;
}

const string &O::getName() const {
    return name;
}
