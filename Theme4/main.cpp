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
 * Que peut-on dire maintenant de la classe complex ?
 *
 * Elle redéfinit les opérateurs (+ - * / << >> =)
 * pour les appliquer à des nombres complexes
 */
    Complex complex(8, 5);
    Complex complex1(1, 9);

    cout << "complex : ";  complex.toString();
    cout << "complex1 : "; complex1.toString();

    cout << endl;

    cout << "addition : ";  (complex + complex1).toString();
    cout << "subtraction : ";  (complex - complex1).toString();
    cout << "multiplication : ";  (complex * complex1).toString();
    cout << "division : ";  (complex / complex1).toString();
    cout << "equal : ";  (complex = complex1).toString();
    cout << "<< : ";  (complex << complex1).toString();
    cout << ">> : ";  (complex >> complex1).toString();

    cout << endl;
    cout << endl;

    Vector vector;
    Vector vector1;

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

    cout << "vector : ";  vector.toString();
    cout << "vector1 : "; vector1.toString();

    cout << endl;

    cout << "addition : ";  (vector + vector1).toString();
    cout << "subtraction : ";  (vector - vector1).toString();
    cout << "multiplication : ";  (vector * vector1).toString();
    cout << "equal : ";  (vector = vector1).toString();
    cout << "<< : ";  (vector << vector1).toString();
    cout << ">> : ";  (vector >> vector1).toString();

}
