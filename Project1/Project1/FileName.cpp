#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;


double Atlag(int*, int);

void csere(int* x, int* y);

void csere2(int& x, int& y);


int main()
{
	int jegy[10] = { 1,2,3,23,34,56,23,45,21,23 };
	int jegy2[10] = { 10,25,43,23,34,56,23,45,21,23 };
	cout << "\nSzamtani atlag: " << Atlag(jegy, 10) << endl;
	cout << "\nSzamtani atlag: " << Atlag(jegy2, 10) << endl;

	// Érték szerinti átadás.
	int szam1, szam2;
	cout << "Elso szam: ";
	cin >> szam1;
	cout << "Masodik szam: ";
	cin >> szam2;
	cout << "Csere elott: " << szam1 << ", " << szam2 << endl;
	csere(&szam1, &szam2);
	cout << "Csere utan: " << szam1 << ", " << szam2 << endl;
	csere2(szam1, szam2);
	cout << "Csere utan: " << szam1 << ", " << szam2 << endl;


	return 0;
}

double Atlag(int* tmb, int db)
{
	double osszeg = 0;
	for (int i = 0; i < db; i++)
	{
		osszeg += tmb[i];
	}
	return osszeg / db;
}

void csere(int* x, int* y)
{
	int seged;
	seged = *x;
	*x = *y;
	*y = seged;
}


void csere2(int& x, int& y)
{
	int seged = x;
	x = y;
	y = seged;
}


