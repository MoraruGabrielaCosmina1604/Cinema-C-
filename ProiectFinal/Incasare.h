#pragma once
#include<iostream>
#include "Bilet.h"
#include "Cinema.h"
#include "Film.h"
using namespace std;

class Incasare {
private:
	const int id = 0;
	int idBilet;
	char* nume;
	int nr;
	int* incasare;
	static int nrIncasari;
};
int Incasare::nrIncasari = 0;
