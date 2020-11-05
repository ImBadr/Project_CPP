/**
 * @author Badr TADJER
 * @author Alicia BENIDDIR
 * @date 29/10/2020
 */

#ifndef _O_H
#define _O_H

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class O {
    string _name;
public:
    O();
    explicit O(const string &name);
    ~O();

    const string &getName() const;
};

#endif //_O_H
