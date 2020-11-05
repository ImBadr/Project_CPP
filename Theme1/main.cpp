/**
 * @author Badr TADJER
 * @author Alicia BENIDDIR
 * @date 28/10/2020
 */

#include "Complex.h"

int main() {
    Complex c(1, 5);

    cout << "Imaginary :\n" << c.getReal() << " + i" << "\n" << "Real :\n" << c.getImaginary() << endl;

    return 0;
}