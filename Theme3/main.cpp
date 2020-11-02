#include "Y.h"
#include "D.h"
#include "O.h"
#include "T.h"

int main() {
/*
 * Quel est le constructeur appelé pour créer f ?
 *
 * Le Constructeur appelé pour f est le CONSTRUCTOR BY COPY
 */

/*
 * Qu'en déduisez-vous sur le constructeur utilisé pour créer f ?
 *
 * Il construit un objet à partir d'un autre,
 * en copiant toutes les valeurs et caractéristiques dans copier les références.
 */
//    Y e("e");
//    e.addValue(10);e.addValue(20);e.addValue(50);
//    Y f("f", e);
//    e.setValue(1, 99);
//    e.toString();
//    f.toString();


/*
 * Quand les destructions d'objets ont-elles lieu ?
 *
 * Les destructeurs du dernier objet crée se lance en premier
 */

/*
 * Y a-t-il toujours autant de destruction d'objets que de création d'objets ?
 *
 * Pour le moment de ce que j'ai vu il y a autant de CONSTRUCTOR appelé que de DESTRUCTOR
 */
//    D d1("d1", 1);
//    D d2("d2", 6);
//    D d3("d3", d2);
//    D d4("d4", d1);
//
//    D* dp1 = &d1;
//    D* dp3 = &d3;


/*
 * les constructeurs et les destructeurs de O sont-ils appelés ?
 *
 * Les CONSTRUCTORS de O sont appelé à la création du tableau par le constructeur par defaut
 * Les DESTRUCTORS supprime chaque tableau 1 à 1
 * mais les DESTRUCTORS de chaque élément du tableau sont appélé du Dernier au Premier
 */
//    T tab;
//
//    O o1("O1");O o2("O2");O o3("O3");
//    O o4("O4");O o5("O5");O o6("O6");
//    O o7("O7");O o8("O8");O o9("O9");
//    O o10("10");O o11("11");O o12("12");
//
//    tab.addElement(0,0,o1);tab.addElement(0,1,o2);tab.addElement(0,2,o3);
//    tab.addElement(1,0,o4);tab.addElement(1,1,o5);tab.addElement(1,2,o6);
//    tab.addElement(2,0,o7);tab.addElement(2,1,o8);tab.addElement(2,2,o9);
//    tab.addElement(3,0,o10);tab.addElement(3,1,o11);tab.addElement(3,2,o12);
//
//    tab.toString();


/*
 * Que constatez-vous ?
 *
 * Il n'y a aucun changement au niveau des CONSTRUCTORS et DESTRUCTORS
 */
//    T* a = &tab;
//    void* b = &tab;

    return 0;
}
