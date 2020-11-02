/**
 * @author Badr TADJER
 * @author Alicia BENIDDIR
 * @date 31/10/2020
 */

#include "B.h"
#include "Sess.h"
#include "T.h"

int main() {
/*
 * Ecrivez un programme avec deux classes nommées A et B.
 * Parmi les membres de la classe B doit se trouver un objet de la classe A nommé a.
 * Ecrivez le constructeur de la classe B, trouvez plusieurs manières d'initialiser le membre a.
 */
//    A a2("a2", 20);
//
//    B b1("a1", 10);
//    B b2(a2);
//
//    b1.toString();
//    b2.toString();


/*
 * Ecrivez une classe Sess qui attribue un numéro différent (et croissant) à chaque objet de cette classe.
 * A chaque fois qu'un objet de cette classe est créé ou détruit, afficher le nombre d'objets de cette classe qui existent.
 */
//    Sess sess1; Sess sess2;
//    Sess sess3; Sess sess4;
//    Sess sess5; Sess sess6;
//    Sess sess7; Sess sess8;


/*
 * Ecrivez un programme avec deux classes T et U.
 * Parmi les membres de la classe T doit se trouver un pointeur vers un objet de la classe U.
 * Ecrivez tous les constructeurs et destructeurs des classes T et U, testez-les dans un programme principal.
 */

    // Object Constructor
    T tu1(U("u1"));
    // Parameter Constructor
    T u2("u2");
    // Pointer Constructor
    U u3("u3");
    U* pu3= &u3;
    T ptu3(pu3);

    return 0;
}
