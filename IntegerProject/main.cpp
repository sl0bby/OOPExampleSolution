#include "Integer.h"
int main() {
    Integer int1(10);

    cout << "Initial value of int1: " << int1.getValue() << endl;

    int1.setValue(20);
    cout << "After setting a new value: " << int1.getValue() << endl;

    Integer sum = int1.add(5);
    Integer diff = int1.subtraction(3);
    Integer product = int1.multiplication(4);
    Integer quotient = int1.division(2);

    cout << "\nResults of arithmetic operations:" << endl;
    cout << "Addition: " << sum.getValue() << endl;
    cout << "Subtraction: " << diff.getValue() << endl;
    cout << "Multiplication: " << product.getValue() << endl;
    cout << "Division: " << quotient.getValue() << endl;

    return 0;
}
