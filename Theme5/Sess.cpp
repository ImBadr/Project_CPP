#include "Sess.h"

/*
 * Always initialised static variable here
 * (in .cpp not .h)
 */

int Sess::nbObjects = 0;
int Sess::BORNEMIN = 0;
int Sess::BORNEMAX = 5;

Sess::Sess(){
    BORNEMIN = this->value = rand()%BORNEMAX + BORNEMIN;
    Sess::nbObjects++;
    cout << "Constructor >> NbObjets : " << nbObjects << endl;
    cout << "Value : " << this->value << endl;
}

Sess::~Sess() {
    nbObjects--;
    cout << "Destructor >> NbObjets : " << nbObjects << endl;
}
