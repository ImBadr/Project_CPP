/**
 * @author Badr TADJER
 * @author Alicia BENIDDIR
 * @date 28/10/2020
 */

#include "complexe.h"

int main() {
    Complexe c(1,5);

    cout << "Imaginaire :\n" << c.get_reel() << " + i"
    << "\n" << "Reel :\n" << c.get_imaginaire() << endl;

    return 0;
}