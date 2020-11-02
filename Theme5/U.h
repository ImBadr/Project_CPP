#ifndef _U_H
#define _U_H

#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

class U {
    string name;
public:
    explicit U(string name);
    U(const U &u);
    virtual ~U();

    const string &getName() const;
};

#endif //_U_H
