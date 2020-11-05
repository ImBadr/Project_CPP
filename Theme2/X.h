/**
 * @author Badr TADJER
 * @author Alicia BENIDDIR
 * @date 28/10/2020
 */

#ifndef _X_H
#define _X_H

#include <iostream>
#include <cstring>

using namespace std;

#define SIZE 15

class X {
    int _tab[SIZE]{};
public:
    X();
    X(X const &x);
    ~X();

    void setTab(int index, int value);
    void toString();
};

#endif //_X_H
