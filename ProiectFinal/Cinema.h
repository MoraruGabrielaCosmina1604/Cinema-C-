#pragma once
#include <iostream>
using namespace std;

class Cinema {
private:
	const int cinemaId = 0;
	int id;
	char* nume;
	string oras;
	string adresa;
	int nrZile;
	string* zi;
	static int numarCinemauri;
};
int Cinema::numarCinemauri = 0;