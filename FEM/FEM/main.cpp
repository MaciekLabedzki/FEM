#include <iostream>
#include <string>

#include "GlobalData.h"
#include "Node.h"
#include "Element.h"
#include "Grid.h"
#include "calka.h"

using namespace std;

int main() {

	GlobalData data("data.txt");
	
	Grid grid(data);

	for (int i = 0; i < data.nh; i++) {
		//cout << i << ": " << endl << "   x - " << grid.ND[i].x << endl << "   y - " << grid.ND[i].y << endl << "   status - " << grid.ND[i].status << endl;
	}

	calka c;
	c.oblicz(2);
	cout << endl;
	c.oblicz(3);

	system("pause");
	return 0;
}