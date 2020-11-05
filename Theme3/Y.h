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
    string _name;
    int *_tab;
    int _size;
public:
    explicit Y(string name);
    Y(string name, Y const &y);
    ~Y();

    void addValue(int value);
    int getValue(int index);
    void setValue(int index, int value);
    void toString();
};

#endif // _Y_H
