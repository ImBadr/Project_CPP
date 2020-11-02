#ifndef _O_H
#define _O_H

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class O {
    string name;
public:
    O();
    explicit O(const string &name);
    ~O();

    const string &getName() const;
};

#endif //_O_H
