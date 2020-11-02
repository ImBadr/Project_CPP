/**
 * @author Badr TADJER
 * @author Alicia BENIDDIR
 * @date 28/10/2020
 */

#ifndef _D_H
#define _D_H

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class D {
    string name;
    int value;
public:
    D(const string &name, int value);
    D(string name, const D &d);
    ~D();
};

#endif // _D_H
