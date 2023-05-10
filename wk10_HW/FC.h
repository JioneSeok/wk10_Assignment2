#pragma once
#include <iostream>
using namespace std;

class FC {
public:
	FC() { };
	FC(float cc) {
		c = cc;
		f = getF();
	};
	float c, f;
	float getC();
	float getF();
};
