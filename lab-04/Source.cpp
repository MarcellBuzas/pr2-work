#include<iostream>
#include<ctime>
#include<string>
#include<fstream>

using namespace std;

#define PI 3.14145
#define osszead(X, Y) (X) + (Y) 
#define szoroz(X, Y) (X) * (Y)
#define oszt(X, Y) X/Y

int a = 5;

int FV(int b) {
	cout << b << endl;
	cout << a << endl;


	{
		double b = 3.5;
		cout << b << endl;
		cout << a << endl;
	}
	return a + 1;
}
int add(int a, int b) {
	return a + b;
}

int main()
{
	int a = 15;
	cout << FV(a);

	cout << "Makrók: " << endl;
	cout << osszead(3, 4) << endl;
	cout << szoroz(8, 7) << endl;
	cout << oszt(8, 2) << endl;
	cout << szoroz(PI, 5 * 5);

	cout << endl << endl << "Time:" << endl;
	clock_t kezd, veg;
	kezd = clock();
	int k;
	//for (int i = 0; i < 2*pow(10, 9); i++)
	
		for (int i = 0; i < 200; i++)
	{
		// k = osszead(1, 1); // 79
		// k = 1 + 1;	// 78
		// k = add(1, 1); // 84
	}

	veg = clock();
	cout << (float)(veg - kezd) << endl;



	cout << endl << "Beolvasas: " << endl;
	char szoveg[80], bet;
	ifstream be;
	be.open("szoveg.txt");
	if (be.fail() == 1) {
		cout << "HIBA: a fajl nem olvashato!";
		system("pause");
		exit(1);
	}
	while (!be.eof()) {
		be.get(bet);
		cout << bet;
	}

	be.close();

	return 0;
}