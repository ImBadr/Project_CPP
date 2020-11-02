#include "complexe.h"

int main() {
    Complexe c(1,5);

    cout << "Imaginaire :\n" << c.get_reel() << " + i"
    << "\n" << "Reel :\n" << c.get_imaginaire() << endl;

    return 0;
}