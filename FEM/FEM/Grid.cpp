#include <iostream>

#include "Node.h"
#include "Element.h"
#include "GlobalData.h"
#include "Grid.h"

using namespace std;

Grid::Grid(GlobalData data) {
	ND = new Node[data.nh];
	EL = new Element[data.ne];

	double db = data.B / (data.nB - 1);
	double dh = data.H / (data.nH - 1);

	double podanie = 0;
	int licznik = -1;

	for (int i = 0; i < data.nh; i++) {
		licznik++;
		if (licznik == data.nH) {
			licznik = 0;
			podanie += db;
			cout << endl;
		}

		if (i == licznik || licznik == 0 || licznik == data.nH - 1 || i > data.nh - data.nH)ND[i].status = 1;

		ND[i].y = (i % (int)data.nH)*dh;
		ND[i].x = podanie;

		cout << i << ": x-" << ND[i].x << " y-" << ND[i].y << " s-" << ND[i].status << "       ";

	}

	/////////////////////////////////
	cout << endl;
	int rawEl = data.nH;
	licznik = -1;
	int dodaj = 0;

	for (int i = 0; i < data.ne; i++) {
		licznik++;
		if (licznik == rawEl-1) {
			licznik = 0;
			dodaj++;
		}
		EL[i].id[0] = i + dodaj;
		EL[i].id[1] = i + data.nB + 1 + dodaj;
		EL[i].id[3] = EL[i].id[0] + 1;
		EL[i].id[2] = EL[i].id[1] + 1;

		cout << "El " << i << ": " << EL[i].id[0] << " " <<
			EL[i].id[1] << " " <<
			EL[i].id[2] << " " <<
			EL[i].id[3] << endl;
	}
}