#include <fstream>
#include "CITY.h"
using namespace std;

int main() {
	//sprint 1
	CITY city0;
	cout << city0.fc[3].getF() << endl;

	//sprint 2
	int Seoul[12] = { 0,5,10,15,15,18,21,18,14,9,4,0 };
	ofstream xxx;
	xxx.open("seoul.txt");
	xxx.write((char*)Seoul, 48);
	xxx.close();

	CITY seoul((char*)"seoul.txt");
	cout << seoul.aa[1].getF() << endl;

	//sprint 3
	int City1[12] = { 0,2,9,12,18,21,23,23,20,16,12,9 };
	ofstream aaa;
	aaa.open("city1.txt");
	aaa.write((char*)City1, 48);
	aaa.close();
	CITY city1((char*)"city1.txt");
	cout << city1.aa[1].getF() << endl;

	int City2[12] = { 5,6,10,13,17,20,25,27,28,17,10,8 };
	ofstream bbb;
	bbb.open("city2.txt");
	bbb.write((char*)City2, 48);
	bbb.close();
	CITY city2((char*)"city2.txt");
	cout << city2.aa[1].getF() << endl;


	int City3[12] = { 4,5,10,16,22,25,30,27,24,18,12,7 };
	ofstream ccc;
	ccc.open("city3.txt");
	ccc.write((char*)City3, 48);
	ccc.close();
	CITY city3((char*)"city3.txt");
	cout << city3.aa[1].getF() << endl;


	ofstream ddd;
	ddd.open("citiesF.txt");
	ddd << "Seoul" << " " << "city1" << " " << "city2" << " " << "city3" << endl;
	for (int i = 0; i < 12; i++) {
		ddd << seoul.aa[i].getF() << " " << city1.aa[i].getF() << " " << city2.aa[i].getF() << " " << city3.aa[i].getF() << endl;
	}
	ddd.close();

	ofstream eee;
	eee.open("citiesC.txt");
	eee << "Seoul" << " " << "city1" << " " << "city2" << " " << "city3" << endl;
	for (int i = 0; i < 12; i++) {
		eee << Seoul[i] << " " << City1[i] << " " << City2[i] << " " << City3[i] << endl;
	}
	eee.close();
}
