#ifndef _X_H
#define _X_H

#include <iostream>
#include <cstring>

using namespace std;

#define TAILLE 15

class X {
    int tab[TAILLE]{};
public:
    X();
    X(X const &x);
    ~X();

    void setTab(int index, int value);
    void toString();
};

#endif //_X_H
