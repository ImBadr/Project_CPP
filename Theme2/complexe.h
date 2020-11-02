#ifndef _COMPLEXE_H
#define _COMPLEXE_H

#include <iostream>
#include <cstring>

using namespace std;

class Complexe {
    int _reel;
    int _imaginaire;
public:
    Complexe(int imaginaire = 0, int reel = 0);
    Complexe(Complexe const &complexe);
    ~Complexe();

    // const assure que l'on ne modifie pas l'instance Complexe
    int getReel() const;
    int getImaginaire() const;

    void setReel(int reel);
    void setImaginaire(int imaginaire);

    void addition(int imaginaire = 0, int reel = 0);
    void soustraction(int imaginaire = 0, int reel = 0);
    void multiplication(int imaginaire = 0, int reel = 0);
    void modulo(int imaginaire, int reel);
    void division(int imaginaire, int reel);
};
#endif // _COMPLEXE_H
