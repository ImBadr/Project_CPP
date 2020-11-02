/**
 * @author Badr TADJER
 * @author Alicia BENIDDIR
 * @date 28/10/2020
 */

#include "X.h"

X::X() {
    cout << "Constructeur de X" << endl;
    for (int i = 0; i < TAILLE; ++i) {
        this->tab[i] = i;
    }
}

X::X(X const &x) {
    cout << "Constructeur par recopie de X" << endl;
    for (int i = 0; i < TAILLE; ++i) {
        this->tab[i] = x.tab[i];
    }
}

X::~X() {
    cout << "Destructor de X" << endl;
}

void X::setTab(int index, int value) {
    this->tab[index] = value;
}

void X::toString() {
    for (int i = 0; i < TAILLE; ++i) {
        cout << this->tab[i] << " | ";
    }
    cout << endl;
}

