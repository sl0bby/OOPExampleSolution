#include <iostream>
using namespace std;


class Integer {
private:
    int value;

public:
    Integer();
    Integer(int v);

    int getValue();
    void setValue(int v);

    Integer add(int num);
    Integer subtraction(int num);
    Integer multiplication(int num);
    Integer division(int num);
};
