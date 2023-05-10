#pragma once
#include "FC.h"

class CITY {
public:
	CITY() { };
	CITY(char* a) {
		ifstream xx;
		xx.open(a);
		xx.read((char*)b, 48);

		for (int i = 0; i < 12; i++) {
			aa[i] = FC(b[i]);
		}
	}
	
	FC fc[12] = { -5, -1,4,9,20,27,33,31,29,20,7,1 };
	FC aa[12];
	int b[12];
};