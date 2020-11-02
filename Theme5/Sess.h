/**
 * @author Badr TADJER
 * @author Alicia BENIDDIR
 * @date 31/10/2020
 */

#ifndef _SESS_H
#define _SESS_H

#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

class Sess {
    int value;
public:
    static int nbObjects;
    static int BORNEMAX;
    static int BORNEMIN;
    Sess();
    virtual ~Sess();

};

#endif // _SESS_H
