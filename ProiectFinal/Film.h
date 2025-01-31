#pragma once
#include <iostream>;
#include "Cinema.h"
using namespace std;


class Film {
private:
	const int filmId = 0;
	int id;
	char* nume;
	float durata;
	int nrZile;
	string* zi;
	float start;
	static int numarFilme;
};
int Film::numarFilme = 0;