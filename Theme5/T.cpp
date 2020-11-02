/**
 * @author Badr TADJER
 * @author Alicia BENIDDIR
 * @date 31/10/2020
 */

#include "T.h"

T::T(string name) {
    this->u = new U(move(name));
}

T::T(const U& u) {
    this->u = new U(u);
}

T::T(U *u) : u(u) {}

T::~T() {
//    delete this->u;
//    cout << "Destructor of " << u->getName() << endl;
}
