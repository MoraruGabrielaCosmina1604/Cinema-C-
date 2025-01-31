#pragma once
#include <iostream>

using namespace std;

class Bilet {
private:
	const int id = 0;
	char* nume;
	int nrPersoane;
	string* persoane;
	Cinema cinema;
	Film film;
	static int nrBilete;


};
int Bilet::nrBilete = 0;