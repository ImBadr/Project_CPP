/**
 * @author Badr TADJER
 * @author Alicia BENIDDIR
 * @date 31/10/2020
 */

#include "U.h"

U::U(string name) : name(move(name)) {}

U::U(const U &u){
    this->name = u.name;
}

U::~U() {
    cout << this->name << endl;
    delete this;
}

const string &U::getName() const {
    return name;
}
