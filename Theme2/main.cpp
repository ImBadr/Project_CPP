/**
 * @author Badr TADJER
 * @author Alicia BENIDDIR
 * @date 28/10/2020
 */

#include "complexe.h"
#include "X.h"

int main() {
    Complexe c(8, 5);

    Complexe c1(c);

    c.setImaginaire(6);
    c.setReel(10);
//    c.toString();
    c.modulo(3, 0);
    c.toString();
    c.saisie();
    c.toString();

//    ------------------------------------------------------

    //  X x;
//    x.toString();
    //   X x1(x);
//    x1.toString();
    // x.setTab(6, 213);
//    x.toString();
    //   x1.toString();

    return 0;
}
