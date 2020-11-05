/**
 * @author Badr TADJER
 * @author Alicia BENIDDIR
 * @date 31/10/2020
 */

#ifndef _U_H
#define _U_H

#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

class U {
    string _name;
public:
    explicit U(string name);
    U(const U &u);
    virtual ~U();

    const string &getName() const;
};

#endif //_U_H
