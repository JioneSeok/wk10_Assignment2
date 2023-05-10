#pragma once

class oop {
public:
	oop() {
		x1 = x2 = x3 = x4 = 0; total = 0;
	};
	oop(int a, int b, int c, int d) {
		x1 = a; x2 = b; x3 = c; x4 = d;
	}
	int total;
	int x1, x2, x3, x4;
	int sum();
	oop operator+(oop k);
};
