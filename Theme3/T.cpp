#include "T.h"

T::T() {
    cout << "Constructor" << endl;
    this->tab2D = new O* [line];
    for (int i=0; i < line; i++){
        this->tab2D[i] = new O[column];
    }
}

T::~T() {
    for (int i = 0; i < line; ++i)
        delete [] this->tab2D[i];
    delete this->tab2D;
    cout << "Destructor" << endl;
}

void T::addElement(int x, int y, const O &o) {
    this->tab2D[x][y] = o;
}

void T::toString() {
    for (int u = 0; u < line; u++) {
        for (int v=0; v < column; v++)
            cout << this->tab2D[u][v].getName() << " ";
        cout << endl;
    }
}
