/**
 * @author Badr TADJER
 * @author Alicia BENIDDIR
 * @date 31/10/2020
 */

#include "B.h"

B::B(const string& name, int value) : a(A(name, value)) {}

B::B(const A& a) : a(A(a)) {}

B::~B() = default;

void B::toString() {
    this->a.toString();
}


