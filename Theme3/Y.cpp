/**
 * @author Badr TADJER
 * @author Alicia BENIDDIR
 * @date 29/10/2020
 */

#include "Y.h"

Y::Y(string name){
    this->_name = move(name);
    this->_size = 0;
    this->_tab = (int*) malloc(sizeof(int));
    cout << "Constructor : " << this->_name << endl;
}

Y::Y(string name, Y const &y){
    this->_tab = (int*) malloc(sizeof(int) * y._size);
    this->_size = y._size;
    this->_name = move(name);
//    this->_tab = y._tab; // copy references
    memcpy(this->_tab, y._tab, sizeof(int) * this->_size); // copy only values
    cout << "Constructor by copy : " << this->_name << endl;
}

Y::~Y() {
    free(this->_tab);
    cout << "Destructor : " << this->_name << endl;
}

void Y::addValue(int value) {
    this->_tab[this->_size] = value;
    this->_size++;
    this->_tab = (int*) realloc(this->_tab, sizeof(int) * (this->_size + 1));
}

int Y::getValue(int index) {
    return this->_tab[index];
}

void Y::setValue(int index, int value) {
    this->_tab[index] = value;
}

void Y::toString() {
    for (int i = 0; i < this->_size; i++) {
        cout << this->getValue(i) << endl;
    }
}
