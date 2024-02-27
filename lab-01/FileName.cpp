#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include<ctime>

using namespace std;

struct adatok
{
	int szakitas = 0, lokes = 0, suly = 0, rajtszam = 0;
	string nev;
};

int main()
{
	int i = 0, letszam = 0, suly = 0, kevesebb = 0;
	fstream fajl("nevek.txt");

	srand((unsigned)time(NULL));

	adatok tmb[15];
	for (i = 0; i < 15 && !fajl.eof(); i++) //Vagy 15-ig megy, vagy a f�jl v�g�ig, Ha r�videbb a f�jl p�ld�ul
	{
		fajl >> tmb[i].szakitas;
		fajl >> tmb[i].lokes;
		getline(fajl, tmb[i].nev);
		tmb[i].rajtszam = rand() % 89 + 10;
		do {
			cout << "Adja meg a " << tmb[i].nev << " versenyzo sulyat (95-150): " << endl;
			cin >> tmb[i].suly;
			cin.ignore();
			if (tmb[i].suly < 95 || tmb[i].suly > 150) 
			{
				cout << "Hibas adat, a sulynak 95 �s 150 kg k�z�tt kell lennie!";
			}
		} while (tmb[i].suly < 95 || tmb[i].suly > 150);

		letszam++;
	}
	fajl.close(); // f�jl lez�r�s (ha m�r nincs r� sz�ks�g)

	cout << "A versenyen " << letszam << " versenyzo indult." << endl;
	cout.setf(ios::right); // jobbra igaz�tja a sz�veget

	for (i = 0; i < letszam; i++)
	{
		cout << setw(20) << tmb[i].nev << "\t rajtszam: " << tmb[i].rajtszam
			<< "\t suly: " << tmb[i].suly << "\t szakitas: " << tmb[i].szakitas
			<< "\t lokes: " << tmb[i].lokes << "\t osszesitett: "
			<< (tmb[i].lokes + tmb[i].szakitas) << endl;
	}
}
