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
    int _value;
public:
    static int NB_OBJECTS;
    static int BORNE_MAX;
    static int BORNE_MIN;
    Sess();
    virtual ~Sess();

};

#endif // _SESS_H
