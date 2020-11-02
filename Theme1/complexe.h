/**
 * @author Badr TADJER
 * @author Alicia BENIDDIR
 * @date 28/10/2020
 */

#ifndef _COMPLEXE_
#define _COMPLEXE_

#include <iostream>

using namespace std;

class Complexe {
    // attribut en privé par defaut
    int _reel;
    int _imaginaire;
public:
    Complexe(int r = 0, int i = 0);
    ~Complexe();

    // const assure que l'on ne modifie pas l'instance Complexe
    int get_reel() const {
        cout << "Getter reel en cours ..." << endl;
        return this->_reel;
    }
    int get_imaginaire() const {
        cout << "Getter Imaginaire en cours ..." << endl;
        return this->_imaginaire;
    }
};

#endif