/**
 * @author Badr TADJER
 * @author Alicia BENIDDIR
 * @date 29/10/2020
 */

#include "Y.h"

Y::Y(string name){
    this->name = move(name);
    this->size = 0;
    this->tab = (int*) malloc(sizeof(int));
    cout << "Constructor : " << this->name << endl;
}

Y::Y(string name, Y const &y){
    this->tab = (int*) malloc(sizeof(int) * y.size);
    this->size = y.size;
    this->name = move(name);
//    this->tab = y.tab; // copy references
    memcpy(this->tab, y.tab, sizeof(int) * this->size); // copy only values
    cout << "Constructor by copy : " << this->name << endl;
}

Y::~Y() {
    free(this->tab);
    cout << "Destructor : " << this->name << endl;
}

void Y::addValue(int value) {
    this->tab[this->size] = value;
    this->size++;
    this->tab = (int*) realloc(this->tab, sizeof(int) * (this->size + 1));
}

int Y::getValue(int index) {
    return this->tab[index];
}

void Y::setValue(int index, int value) {
    this->tab[index] = value;
}

void Y::toString() {
    cout << "------" << this->name << "-----" << endl;
    for (int i = 0; i < this->size; i++) {
        cout << this->getValue(i) << endl;
    }
}
