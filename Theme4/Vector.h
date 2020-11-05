/**
 * @author Badr TADJER
 * @author Alicia BENIDDIR
 * @date 30/10/2020
 */

#ifndef _VECTOR_H
#define _VECTOR_H

#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

class Vector {
    int* tab{};
    int size;
public:
    Vector();
    Vector(const Vector &c);
    virtual ~Vector();

    void addValue(int value);
    void toString();

    Vector operator+(const Vector &c) const;
    Vector operator-(const Vector &c) const;
    Vector operator*(const Vector &c) const;
    Vector operator=(const Vector &c);
    Vector operator<<(const Vector &c) const;
    Vector operator>>(const Vector &c) const;

};

#endif //_VECTOR_H
