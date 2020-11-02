#include "A.h"

A::A(const string &name, int value) {
    this->name = name;
    this->value = value;
}

A::A(const A &a) {
    this->name = a.name;
    this->value = a.value;
}

A::~A() = default;

void A::toString() {
    cout << "Name : " << this->name << endl;
    cout << "Value : " << this->value << endl;
}
