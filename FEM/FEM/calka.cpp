#include "calka.h"
#include <iostream>

using namespace std;

double calka::f(double x , double y) {
	return  2 * x *x *y *y +6 *x + 5;
}

double calka::oblicz(double liczba ) {
	double *wsp ;
	double *w;
	
	if (liczba == 2) {
		wsp =new double[2] { -0.577,0.577 };
		w = new double[2] { 1.0,1.0 };
	}
	else if (liczba == 3) {
		double x, y;
		x = 0.55555555555;
		y = 0.88888888888;
		wsp = new double[3]{ -0.7745 , 0, 0.7745 };
		w = new double[3]{ x,y,x };
	}
	else {
		cout << "B³êdne dane" << endl;
		return 0;
	}

	double a = 0;

	for(int j =0 ; j<liczba ;j++) {
			for(int i =0 ; i<liczba ;i++) {
				a += f(wsp[i],wsp[j]) * w[i]*w[j];
		}
	}

	this->wynik = a;
	
	cout<<a<<endl;

	return a;
}


