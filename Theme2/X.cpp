/**
 * @author Badr TADJER
 * @author Alicia BENIDDIR
 * @date 28/10/2020
 */

#include "X.h"

X::X() {
    cout << "Constructor" << endl;
    for (int i = 0; i < SIZE; ++i) {
        this->_tab[i] = i;
    }
}

X::X(X const &x) {
    cout << "Constructor by copy" << endl;
    for (int i = 0; i < SIZE; ++i) {
        this->_tab[i] = x._tab[i];
    }
}

X::~X() {
    cout << "Destructor" << endl;
}

void X::setTab(int index, int value) {
    this->_tab[index] = value;
}

void X::toString() {
    for (int i = 0; i < SIZE; ++i) {
        cout << this->_tab[i] << " | ";
    }
    cout << endl;
}

