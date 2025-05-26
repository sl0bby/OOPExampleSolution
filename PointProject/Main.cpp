#include "Point2D.h"

int main() {
	string s1, s2;
	/*int a, b, c;
	c = a + b;
	c = a - b;
	c = a * b;
	c = a / b;
	c = a % b;
	++c;
	c++;
	c = -c;

	c = a.sum(b);*/
	Point2D a(1, 1), b(2, 2);

	cout << a.toString() << " + " << b.toString()
		<< " = " << (a + b).toString() << endl;

	int value = 5;
	cout << a.toString() << " + " << value
		<< " = " << (a + value).toString() << endl;
}
