#ifndef _T_H
#define _T_H

#include "U.h"

class T {
    U* u;
public:
    explicit T(string name);
    explicit T(const U& u);
    explicit T(U *u);
    virtual ~T();

};

#endif //_T_H
