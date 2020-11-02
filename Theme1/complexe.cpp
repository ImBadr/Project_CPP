/**
 * @author Badr TADJER
 * @author Alicia BENIDDIR
 * @date 28/10/2020
 */

#include "complexe.h"

Complexe::Complexe(int imaginaire, int reel) {
    // Constructeur
    this->_imaginaire = imaginaire;
    this->_reel = reel;
}
Complexe::~Complexe(){
    // Desctructeur
    cout << "Destructor" << endl;
}