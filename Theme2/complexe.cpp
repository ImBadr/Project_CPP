/**
 * @author Badr TADJER
 * @author Alicia BENIDDIR
 * @date 28/10/2020
 */

#include "complexe.h"

Complexe::Complexe(int imaginaire, int reel) {
    // Constructeur
    cout << "Constructeur" << endl;
    this->_imaginaire = imaginaire;
    this->_reel = reel;
}

Complexe::Complexe(Complexe const &complexe) {
    // Constructeur
    cout << "Constructeur par recopie" << endl;
    this->_imaginaire = complexe.getImaginaire();
    this->_reel = complexe.getReel();
}

Complexe::~Complexe() {
    // Desctructeur
    cout << "Destructor" << endl;
}

void Complexe::setReel(int reel) {
    _reel = reel;
}

void Complexe::setImaginaire(int imaginaire) {
    _imaginaire = imaginaire;
}

int Complexe::getReel() const {
    cout << "Getter reel en cours ..." << endl;
    return this->_reel;
}

int Complexe::getImaginaire() const {
    cout << "Getter Imaginaire en cours ..." << endl;
    return _imaginaire;
}

void Complexe::addition(int imaginaire, int reel) {
    setImaginaire(this->getImaginaire() + imaginaire);
    setReel(this->getReel() + reel);
}

void Complexe::soustraction(int imaginaire, int reel) {
    setImaginaire(this->getImaginaire() - imaginaire);
    setReel(this->getReel() - reel);
}

void Complexe::division(int imaginaire, int reel) {
    if (imaginaire == 0 || reel == 0 || this->getImaginaire() == 0 || this->getReel() == 0) {
        cerr << "Division par 0 impossible" << endl;
        return;
    }
    setImaginaire(this->getImaginaire() / imaginaire);
    setReel(this->getReel() / reel);
}

void Complexe::multiplication(int imaginaire, int reel) {
    setImaginaire(this->getImaginaire() * imaginaire);
    setReel(this->getReel() * reel);
}

void Complexe::modulo(int imaginaire, int reel) const {
    cout << sqrt(pow(this->getImaginaire() + imaginaire, 2) + pow(this->getReel() + reel, 2)) << endl;
}

void Complexe::saisie() {
    cout << "Please enter an imaginary : ";
    cin >> this->_imaginaire;
    cout << "Please enter a real : ";
    cin >> this->_reel;
}

void Complexe::toString() const {
    cout << this->_reel << "+" << this->_imaginaire << ".i"  << endl;
}
