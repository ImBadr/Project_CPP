/**
 * @author Badr TADJER
 * @author Alicia BENIDDIR
 * @date 29/10/2020
 */

#ifndef _T_H
#define _T_H

#include "O.h"

#define LINE 4
#define COLUMN 3

class T {
    O** _tab2D;
public:
    T();
    ~T();

    void addElement(int x, int y, O const &o);
    void toString();
};

#endif //_T_H
