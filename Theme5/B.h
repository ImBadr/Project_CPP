/**
 * @author Badr TADJER
 * @author Alicia BENIDDIR
 * @date 31/10/2020
 */

#ifndef _B_H
#define _B_H

#include "A.h"

class B {
    A _a;
public:
    explicit B(const string& name, int value);
    explicit B(const A& a);
    virtual ~B();

    void toString();
};

#endif // _B_H
