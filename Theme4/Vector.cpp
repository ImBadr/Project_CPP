/**
 * @author Badr TADJER
 * @author Alicia BENIDDIR
 * @date 30/10/2020
 */

#include "Vector.h"

Vector::Vector(){
    this->_size = 0;
    this->_tab = (int*) malloc(sizeof(int));
}

Vector::Vector(Vector const &v){
    this->_tab = (int*) malloc(sizeof(int) * v._size);
    this->_size = v._size;
    memcpy(this->_tab, v._tab, sizeof(int) * this->_size);
}

Vector::~Vector() {
    free(this->_tab);
}

void Vector::addValue(int value) {
    this->_tab[this->_size] = value;
    this->_size++;
    this->_tab = (int*) realloc(this->_tab, sizeof(int) * (this->_size + 1));
}

void Vector::toString() {
    cout << "_tab : \t|";
    for (int i = 0; i < this->_size; ++i)
        cout << this->_tab[i] << " | ";
    cout << endl;
}

Vector Vector::operator+(const Vector &c) const {
    Vector newVector;
    if (this->_size > c._size){
        for (int i = 0; i < this->_size; ++i) {
            if (i < c._size){ newVector.addValue(this->_tab[i] + c._tab[i]); }
            else newVector.addValue(this->_tab[i]);
        }
    }
    else if (this->_size < c._size){
        for (int i = 0; i < c._size; ++i) {
            if (i < this->_size){ newVector.addValue(this->_tab[i] + c._tab[i]); }
            else newVector.addValue(c._tab[i]);
        }
    }
    else{
        for (int i = 0; i < c._size; ++i) {
            newVector.addValue(this->_tab[i] + c._tab[i]);
        }
    }
    return newVector;
}

Vector Vector::operator-(const Vector &c) const {
    Vector newVector;
    if (this->_size > c._size){
        for (int i = 0; i < this->_size; ++i) {
            if (i < c._size){ newVector.addValue(this->_tab[i] - c._tab[i]); }
            else newVector.addValue(this->_tab[i]);
        }
    }
    else if (this->_size < c._size){
        for (int i = 0; i < c._size; ++i) {
            if (i < this->_size){ newVector.addValue(this->_tab[i] - c._tab[i]); }
            else newVector.addValue(c._tab[i]);
        }
    }
    else{
        for (int i = 0; i < c._size; ++i) {
            newVector.addValue(this->_tab[i] - c._tab[i]);
        }
    }
    return newVector;
}

Vector Vector::operator*(const Vector &c) const {
    Vector newVector;
    if (this->_size > c._size){
        for (int i = 0; i < c._size; ++i) {
                if (this->_tab[i] == 0 | c._tab[i] == 0){
                    newVector.addValue(0);
                    continue;
                }
                newVector.addValue(this->_tab[i] * c._tab[i]);
        }
    }
    else if (this->_size < c._size){
        for (int i = 0; i < this->_size; ++i) {
                if (this->_tab[i] == 0 | c._tab[i] == 0){
                    newVector.addValue(0);
                    continue;
                }
                newVector.addValue(this->_tab[i] * c._tab[i]);
        }
    }
    else{
        for (int i = 0; i < c._size; ++i) {
            newVector.addValue(this->_tab[i] * c._tab[i]);
        }
    }
    return newVector;
}

Vector Vector::operator=(const Vector &c) {
    return Vector(c);
}

Vector Vector::operator<<(const Vector &c) const {
    Vector newVector;
    if (this->_size > c._size){
        for (int i = 0; i < this->_size; ++i) {
            if (i < c._size){ newVector.addValue(this->_tab[i] << c._tab[i]); }
            else newVector.addValue(this->_tab[i]);
        }
    }
    else if (this->_size < c._size){
        for (int i = 0; i < c._size; ++i) {
            if (i < this->_size){ newVector.addValue(this->_tab[i] << c._tab[i]); }
            else newVector.addValue(c._tab[i]);
        }
    }
    else{
        for (int i = 0; i < c._size; ++i) {
            newVector.addValue(this->_tab[i] << c._tab[i]);
        }
    }
    return newVector;
}

Vector Vector::operator>>(const Vector &c) const {
    Vector newVector;
    if (this->_size > c._size){
        for (int i = 0; i < this->_size; ++i) {
            if (i < c._size){ newVector.addValue(this->_tab[i] >> c._tab[i]); }
            else newVector.addValue(this->_tab[i]);
        }
    }
    else if (this->_size < c._size){
        for (int i = 0; i < c._size; ++i) {
            if (i < this->_size){ newVector.addValue(this->_tab[i] >> c._tab[i]); }
            else newVector.addValue(c._tab[i]);
        }
    }
    else{
        for (int i = 0; i < c._size; ++i) {
            newVector.addValue(this->_tab[i] >> c._tab[i]);
        }
    }
    return newVector;
}

