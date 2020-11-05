/**
 * @author Badr TADJER
 * @author Alicia BENIDDIR
 * @date 31/10/2020
 */

#include "Sess.h"

/*
 * Always initialised static variable here
 * (in .cpp not .h)
 */

int Sess::NB_OBJECTS = 0;
int Sess::BORNE_MIN = 0;
int Sess::BORNE_MAX = 5;

Sess::Sess(){
    BORNE_MIN = this->_value = rand() % BORNE_MAX + BORNE_MIN;
    Sess::NB_OBJECTS++;
    cout << "Constructor >> NbObjets : " << NB_OBJECTS << endl;
    cout << "Value : " << this->_value << endl;
}

Sess::~Sess() {
    NB_OBJECTS--;
    cout << "Destructor >> NbObjets : " << NB_OBJECTS << endl;
}
