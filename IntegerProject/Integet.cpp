#include "Integer.h"
Integer::Integer() {
    value = 0;
}

Integer::Integer(int v) {
    value = v;
}

int Integer::getValue() {
    return value;
}

void Integer::setValue(int v) {
    value = v;
}

Integer Integer::add(int num) {
    return Integer(value + num);
}

Integer Integer::subtraction(int num) {
    return Integer(value - num);
}

Integer Integer::multiplication(int num) {
    return Integer(value * num);
}

Integer Integer::division(int num) {
    if (num == 0) {
        cout << "Error: Division by zero." << endl;
        return Integer(0);
    }
    return Integer(value / num);
}
