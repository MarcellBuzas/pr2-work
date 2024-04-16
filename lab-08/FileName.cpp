#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

class Teglalap {

private: int mag, alap;    // Private tulajdonságok
		
public: bool init(int a, int b) {
	if (a > 0 && b > 0)
	{
	mag = a;
	alap = b;
	return true;
	}
	
	cout << "Hiba! Az alap es magassag nem lehet negativ" << endl;
	return false;
}

public: int ter() {		 // Publikus metódus
	return  alap * mag;
}

public: int ker() {	     // Publikus metódus
	return 2 * (alap + mag);
}

public: int getAlap() {
	return alap;
}

public: int getMag() {
	return mag;
}




};

int main()
{
	int old1, old2;
	cout << "Adja meg a teglalap oldalait: " << endl;

	Teglalap t1, t2;
	bool inited = false;
	while (!inited) {
		cin >> old1;
		cin >> old2;
		inited = t2.init(old1, old2);
	}
	t1.init(5, 10);



	cout << "Az elso teglalap terulete: " << t1.ter() << endl;
	cout << "A masodik teglalap terulete: " << t2.ter() << endl;
	cout << "Az elso teglalap magassaga: " << t1.getMag() << endl;









	return 0;
}