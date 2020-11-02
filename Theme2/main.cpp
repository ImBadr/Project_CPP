#include "complexe.h"
#include "X.h"

int main() {
//    Complexe c(8,5);

//    Complexe c1(c);

//    c.setImaginaire(6);
//    c.setReel(10);
//    c.modulo(3, 0);

//    cout << "Imaginaire :\n" << c.getImaginaire() << " + i"
//         << "\n" << "Reel :\n" << c.getReel() << endl;

//    cout << "Imaginaire :\n" << c1.getImaginaire() << " + i"
//         << "\n" << "Reel :\n" << c1.getReel() << endl;

//    ------------------------------------------------------

    X x;
//    x.toString();
    X x1(x);
//    x1.toString();
    x.setTab(6, 213);
    x.toString();
    x1.toString();

    return 0;
}
