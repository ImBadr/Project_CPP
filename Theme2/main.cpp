/**
 * @author Badr TADJER
 * @author Alicia BENIDDIR
 * @date 28/10/2020
 */

#include "Complex.h"
#include "X.h"

int main() {
    Complex c(8, 5);

    Complex c1(c);

    c.setImaginary(6);
    c.setReal(10);
    c.toString();
    c.modulo(3, 0);
    c.toString();
    c.entry();
    c.toString();

//    ------------------------------------------------------

    X x;
    x.toString();
    X x1(x);
    x1.toString();
    x.setTab(6, 213);
    x.toString();
    x1.toString();

    return 0;
}
