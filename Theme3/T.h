#ifndef _T_H
#define _T_H

#include "O.h"

#define line 4
#define column 3

class T {
    O** tab2D;
public:
    T();
    ~T();

    void addElement(int x, int y, O const &o);
    void toString();
};

#endif //_T_H
