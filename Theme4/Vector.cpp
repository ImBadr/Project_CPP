#include "Vector.h"

Vector::Vector(){
    this->size = 0;
    this->tab = (int*) malloc(sizeof(int));
//    cout << "Constructor : " << endl;
}

Vector::Vector(Vector const &v){
    this->tab = (int*) malloc(sizeof(int) * v.size);
    this->size = v.size;
    memcpy(this->tab, v.tab, sizeof(int) * this->size); // copy only values
//    cout << "Constructor by copy : " << endl;
}

Vector::~Vector() {
    free(this->tab);
//    cout << "Destructor : " << endl;
}

void Vector::addValue(int value) {
    this->tab[this->size] = value;
    this->size++;
    this->tab = (int*) realloc(this->tab, sizeof(int) * (this->size + 1));
}

void Vector::toString() {
    cout << "tab : \t|";
    for (int i = 0; i < this->size; ++i)
        cout << this->tab[i] << " | ";
    cout << endl;
}

Vector Vector::operator+(const Vector &c) const {
    Vector newVector;
    if (this->size > c.size){
        for (int i = 0; i < this->size; ++i) {
            if (i < c.size){ newVector.addValue(this->tab[i] + c.tab[i]); }
            else newVector.addValue(this->tab[i]);
        }
    }
    else if (this->size < c.size){
        for (int i = 0; i < c.size; ++i) {
            if (i < this->size){ newVector.addValue(this->tab[i] + c.tab[i]); }
            else newVector.addValue(c.tab[i]);
        }
    }
    else{
        for (int i = 0; i < c.size; ++i) {
            newVector.addValue(this->tab[i] + c.tab[i]);
        }
    }
    return newVector;
}

Vector Vector::operator-(const Vector &c) const {
    Vector newVector;
    if (this->size > c.size){
        for (int i = 0; i < this->size; ++i) {
            if (i < c.size){ newVector.addValue(this->tab[i] - c.tab[i]); }
            else newVector.addValue(this->tab[i]);
        }
    }
    else if (this->size < c.size){
        for (int i = 0; i < c.size; ++i) {
            if (i < this->size){ newVector.addValue(this->tab[i] - c.tab[i]); }
            else newVector.addValue(c.tab[i]);
        }
    }
    else{
        for (int i = 0; i < c.size; ++i) {
            newVector.addValue(this->tab[i] - c.tab[i]);
        }
    }
    return newVector;
}

Vector Vector::operator*(const Vector &c) const {
    Vector newVector;
    if (this->size > c.size){
        for (int i = 0; i < c.size; ++i) {
                if (this->tab[i] == 0 | c.tab[i] == 0){
                    newVector.addValue(0);
                    continue;
                }
                newVector.addValue(this->tab[i] * c.tab[i]);
        }
    }
    else if (this->size < c.size){
        for (int i = 0; i < this->size; ++i) {
                if (this->tab[i] == 0 | c.tab[i] == 0){
                    newVector.addValue(0);
                    continue;
                }
                newVector.addValue(this->tab[i] * c.tab[i]);
        }
    }
    else{
        for (int i = 0; i < c.size; ++i) {
            newVector.addValue(this->tab[i] * c.tab[i]);
        }
    }
    return newVector;
}

Vector Vector::operator/(const Vector &c) const {
    Vector newVector;
    if (this->size > c.size){
        for (int i = 0; i < c.size; ++i) {
            if (this->tab[i] == 0 | c.tab[i] == 0){
                newVector.addValue(0);
                continue;
            }
            newVector.addValue(this->tab[i] / c.tab[i]);
        }
    }
    else if (this->size < c.size){
        for (int i = 0; i < this->size; ++i) {
            if (this->tab[i] == 0 | c.tab[i] == 0){
                newVector.addValue(0);
                continue;
            }
            newVector.addValue(this->tab[i] / c.tab[i]);
        }
    }
    else{
        for (int i = 0; i < c.size; ++i) {
            newVector.addValue(this->tab[i] / c.tab[i]);
        }
    }
    return newVector;
}

Vector Vector::operator=(const Vector &c) {
    return Vector(c);
}

Vector Vector::operator<<(const Vector &c) const {
    Vector newVector;
    if (this->size > c.size){
        for (int i = 0; i < this->size; ++i) {
            if (i < c.size){ newVector.addValue(this->tab[i] << c.tab[i]); }
            else newVector.addValue(this->tab[i]);
        }
    }
    else if (this->size < c.size){
        for (int i = 0; i < c.size; ++i) {
            if (i < this->size){ newVector.addValue(this->tab[i] << c.tab[i]); }
            else newVector.addValue(c.tab[i]);
        }
    }
    else{
        for (int i = 0; i < c.size; ++i) {
            newVector.addValue(this->tab[i] << c.tab[i]);
        }
    }
    return newVector;
}

Vector Vector::operator>>(const Vector &c) const {
    Vector newVector;
    if (this->size > c.size){
        for (int i = 0; i < this->size; ++i) {
            if (i < c.size){ newVector.addValue(this->tab[i] >> c.tab[i]); }
            else newVector.addValue(this->tab[i]);
        }
    }
    else if (this->size < c.size){
        for (int i = 0; i < c.size; ++i) {
            if (i < this->size){ newVector.addValue(this->tab[i] >> c.tab[i]); }
            else newVector.addValue(c.tab[i]);
        }
    }
    else{
        for (int i = 0; i < c.size; ++i) {
            newVector.addValue(this->tab[i] >> c.tab[i]);
        }
    }
    return newVector;
}

