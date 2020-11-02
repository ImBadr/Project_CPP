#include "D.h"

D::D(const string &name, int value) {
    this->name = name;
    this->value = value;
    cout << "Constructor : " << this->name << endl;
}

D::D(string name, const D &d) {
    this->name = move(name);
    this->value = d.value;
    cout << "Constructor : " << this->name << endl;
}

D::~D() {
    cout << "Destructor : " << this->name << endl;
}
