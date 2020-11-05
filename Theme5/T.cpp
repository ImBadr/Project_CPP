/**
 * @author Badr TADJER
 * @author Alicia BENIDDIR
 * @date 31/10/2020
 */

#include "T.h"

T::T(string name) {
    this->_u = new U(move(name));
}

T::T(const U& u) {
    this->_u = new U(u);
}

T::T(U *u) : _u(u) {}

T::~T() = default;
