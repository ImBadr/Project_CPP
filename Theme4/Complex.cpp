#include "Complex.h"

Complex::Complex(int imaginaire, int reel) {
//    cout << "Constructor" << endl;
    this->_imaginaire = imaginaire;
    this->_reel = reel;
}

Complex::~Complex(){
//    cout << "Destructor" << endl;
}

Complex Complex::operator+(const Complex &c) const {
    return Complex(this->_imaginaire + c._imaginaire, this->_reel + c._reel);
}

Complex Complex::operator-(const Complex &c) const {
    return Complex(this->_imaginaire - c._imaginaire, this->_reel - c._reel);
}

Complex Complex::operator*(const Complex &c) const {
    return Complex(this->_imaginaire * c._imaginaire, this->_reel * c._reel);
}

Complex Complex::operator/(const Complex &c) const {
    if (c._imaginaire == 0 || c._reel == 0 || this->_imaginaire == 0 || this->_reel == 0){
        cerr << "Division / par 0 impossible" << endl;
        exit(-1);
    }
    return Complex(this->_imaginaire / c._imaginaire, this->_reel / c._reel);
}

double Complex::module() const {
    return (sqrt(pow(this->_imaginaire, 2) + pow(this->_reel, 2)));
}

Complex Complex::operator=(const Complex &c) const {
    return Complex(c._imaginaire, c._reel);
}

Complex Complex::operator<<(const Complex &c) const {
    return Complex(this->_imaginaire << c._imaginaire, this->_reel << c._reel);
}

Complex Complex::operator>>(const Complex &c) const {
    return Complex(this->_imaginaire >> c._imaginaire, this->_reel >> c._reel);
}

void Complex::toString() const {
    cout << this->_imaginaire << ".i + " << this->_reel << endl;
}
