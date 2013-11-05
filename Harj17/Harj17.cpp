// Valtteri Ahonen
// Harjoitus 17
// 5.11.2013

#include <iostream>
using namespace std;

// Esitellaan tietuerakenne HENK.
struct HENK{
	char etun[20], sukun[20], osoite[40], postin[10];
	float matka;
	int keng;
};

int main()
{
	// Esitellaan tietueet toka ja kolmas ja alustetaan niihin tiedot.
	HENK toka = {"Kalle", "Kustaa", "Mikkolankatu 11 C", "13400", 2.0, 44};
	HENK kolmas = {"Elli-Noora", "Jurvanen", "Aasinpolku 2 A 9", "00200", 5.5, 39};

	// Esitellaan tietue eka ja sitten kysellaan siihen kaikki tiedot.
	HENK eka;
	cout << "Etunimi: ";
	cin >> ws >> eka.etun;
	cout << "\nSukunimi: ";
	cin >> ws >> eka.sukun; 
	cout << "\nKoulumatka (km): ";
	cin >> ws >> eka.matka;
	cout << "\nOsoite: ";
	cin.get();
	cin.getline (eka.osoite, 40);
	cout << "\nPostinumero: ";
	cin >> ws >> eka.postin;
	cout << "\nKeng„nnumero: ";
	cin >> ws >> eka.keng;

	//Vertaillaan koulumatkaa ja tulostetaan pienimmasta suurimpaan
	if (eka.matka > toka.matka){ 
		
		if (eka.matka > kolmas.matka) {
		
			if (toka.matka > kolmas.matka){ // Jos suuruusjärjestys on 3, 2, 1
				cout << kolmas.etun << " " << kolmas.sukun << endl;
				cout << toka.etun << " " << toka.sukun << endl;
				cout << eka.etun << " " << eka.sukun << endl;
			}
			else { // Jos suuruusjärjestys on 2, 3, 1
				cout << toka.etun << " " << toka.sukun << endl;
				cout << kolmas.etun << " " << kolmas.sukun << endl;
				cout << eka.etun << " " << eka.sukun << endl;			
			}
		}
		else { // Jos suuruusjärjestys on 2, 1, 3
			cout << toka.etun << " " << toka.sukun << endl;
			cout << eka.etun << " " << eka.sukun << endl;
			cout << kolmas.etun << " " << kolmas.sukun << endl;		
		}
	}
	else {
		if (kolmas.matka > toka.matka) { // Jos suuruusjärjestys on 1, 2, 3
			cout << eka.etun << " " << eka.sukun << endl;
			cout << toka.etun << " " << toka.sukun << endl;
			cout << kolmas.etun << " " << kolmas.sukun << endl;
		}
		else if (eka.matka > kolmas.matka) { // 3,1,2
			cout << kolmas.etun << " " << kolmas.sukun << endl;
			cout << eka.etun << " " << eka.sukun << endl;
			cout << toka.etun << " " << toka.sukun << endl;	
		}
		else if (eka.matka < kolmas.matka) { // 1,3,2
			cout << eka.etun << " " << eka.sukun << endl;
			cout << kolmas.etun << " " << kolmas.sukun << endl;
			cout << toka.etun << " " << toka.sukun << endl;			
		}
	}
}