/**
 * @author Badr TADJER
 * @author Alicia BENIDDIR
 * @date 31/10/2020
 */

#ifndef _A_H
#define _A_H

#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

class A {
    string name;
    int value;
public:
    A(const string &name, int value);
    A(const A &a);
    virtual ~A();

    void toString();

};

#endif // _A_H
