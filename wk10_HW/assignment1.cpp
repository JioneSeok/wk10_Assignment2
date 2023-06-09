#include <iostream>
#include "oop.h"
using namespace std;

int main() {
	oop A, B;
	A = oop(10, 50, 3, 4);
	B = oop(0, 45, 2, 4);
	A.sum(); B.sum(); 
	cout << A.total << " " << B.total << endl;
	oop C;
	C = oop(A.x1 + B.x1, A.x2 + B.x2, A.x3 + B.x3, A.x4 + B.x4);
	cout << C.x1 << " " << C.x2 << " " << C.x3 << " " << C.x4 << endl;
	C = oop(0, 0, 0, 0);
	C = A + B;
	cout << C.x1 << " " << C.x2 << " " << C.x3 << " " << C.x4 << endl;
	return 123;
}