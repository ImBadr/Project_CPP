/**
 * @author Badr TADJER
 * @author Alicia BENIDDIR
 * @date 30/10/2020
 */

#include <iostream>
#include "Complex.h"
#include "Vector.h"

int main() {
/*
 * Que peut-on dire maintenant de la classe complexe ?
 *
 * Elle redéfinit les opérateurs (+ - * / << >> =)
 * pour les appliquer à des nombres complexes
 */
    Complex complexe(8, 5);
    Complex complexe1(1, 9);

    cout << "complexe : ";  complexe.toString();
    cout << "complexe1 : "; complexe1.toString();

    cout << endl;

    cout << "addition : ";  (complexe + complexe1).toString();
    cout << "soustraction : ";  (complexe - complexe1).toString();
    cout << "multiplication : ";  (complexe * complexe1).toString();
    cout << "division : ";  (complexe / complexe1).toString();
    cout << "module : ";  cout << (complexe.module()) << endl;
    cout << "egale : ";  (complexe = complexe1).toString();
    cout << "<< : ";  (complexe << complexe1).toString();
    cout << ">> : ";  (complexe >> complexe1).toString();

    cout << endl;
    cout << endl;

    Vector vector;
    Vector vector1;
    Vector resultVector;

    vector.addValue(8);
    vector.addValue(5);
    vector.addValue(60);
    vector.addValue(45);
    vector.addValue(30);

    vector1.addValue(1);
    vector1.addValue(9);
    vector1.addValue(30);
    vector1.addValue(20);
    vector1.addValue(70);

    cout << "complexe : ";  vector.toString();
    cout << "complexe1 : "; vector1.toString();

    cout << endl;

    cout << "addition : ";  (vector + vector1).toString();
    cout << "soustraction : ";  (vector - vector1).toString();
    cout << "multiplication : ";  (vector * vector1).toString();
    cout << "division : ";  (vector / vector1).toString();
    cout << "egale : ";  (vector = vector1).toString();
    cout << "<< : ";  (vector << vector1).toString();
    cout << ">> : ";  (vector >> vector1).toString();

}
