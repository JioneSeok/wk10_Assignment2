#include "oop.h"

int oop::sum() {
	total = x1 + x2 + x3 + x4;
	return total;
}

oop oop::operator+(oop k) {
	oop x;
	x.x1 = x1 + k.x1;
	x.x2 = x2 + k.x2;
	x.x3 = x3 + k.x3;
	x.x4 = x4 + k.x4;
	return x;
}