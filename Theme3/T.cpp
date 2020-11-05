/**
 * @author Badr TADJER
 * @author Alicia BENIDDIR
 * @date 29/10/2020
 */

#include "T.h"

T::T() {
    cout << "Constructor" << endl;
    this->_tab2D = new O* [LINE];
    for (int i=0; i < LINE; i++){
        this->_tab2D[i] = new O[COLUMN];
    }
}

T::~T() {
    for (int i = 0; i < LINE; ++i)
        delete [] this->_tab2D[i];
    delete this->_tab2D;
    cout << "Destructor" << endl;
}

void T::addElement(int x, int y, const O &o) {
    this->_tab2D[x][y] = o;
}

void T::toString() {
    for (int u = 0; u < LINE; u++) {
        for (int v=0; v < COLUMN; v++)
            cout << this->_tab2D[u][v].getName() << " ";
        cout << endl;
    }
}
