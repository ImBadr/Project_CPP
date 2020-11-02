/**
 * @author Badr TADJER
 * @author Alicia BENIDDIR
 * @date 29/10/2020
 */

#ifndef _Y_H
#define _Y_H

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;

class Y {
    string name;
    int *tab;
    int size;
public:
    Y(string name);
    Y(string name, Y const &y);
    ~Y();

    void addValue(int value);
    int getValue(int index);
    void setValue(int index, int value);
    void toString();
};

#endif // _Y_H
