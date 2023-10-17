#include <iostream>
using namespace std;

int Konsekvenser(); 
int Meldinger();

float ProcentOverskridelse;
float Forskel;

int main() {
	int TilladtH;
	int MaaltH;
	int Afspildning;

	cout << "Hvad var hastighedsgr\x91nsen?\n";
	cin >> TilladtH;
	cout << "Hvad k\x9Brte personen?\n";
	cin >> MaaltH;
	Forskel = MaaltH - TilladtH;
	ProcentOverskridelse = Forskel / TilladtH * 100;
	
	Meldinger();

	cout << "\nVil du k\x9Bre programmet igen? \n1) Ja\n2) Nej\n";
	cin >> Afspildning;
	switch (Afspildning) {
		case 1:
			cout << endl;
			main();
		case 2:
			exit;
	}
}

int Meldinger() {
	
	if (ProcentOverskridelse >= 30 && ProcentOverskridelse < 50) {
		cout << "\nPersonen har k\x9Brt " << Forskel << " km/t forst\x91rkt. Hvilket svar til " << ProcentOverskridelse << "%\n";
		Konsekvenser();
	}
	else if (ProcentOverskridelse >= 50 && ProcentOverskridelse < 100) {
		cout << "\nPersonen har k\x9Brt " << Forskel << " km/t forst\x91rkt. Hvilket svar til " << ProcentOverskridelse << "%\n";
		Konsekvenser();
	}
	else if (ProcentOverskridelse >= 100) {
		cout << "\nPersonen har k\x9Brt " << Forskel << " km/t forst\x91rkt. Hvilket svar til " << ProcentOverskridelse << "%\n";
		Konsekvenser();
	}
	else if (ProcentOverskridelse >= 1 && ProcentOverskridelse < 30) {
		cout << "\nPersonen har k\x9Brt " << Forskel << " km/t forst\x91rkt. Hvilket svar til " << ProcentOverskridelse << "%\n";
		Konsekvenser();
	}
	return 0;
}

int Konsekvenser() {
	const string Kons10 = "Personen f\x86r en b\x9B""de.\n";
	const string Kons30 = "Personen skal have et klip i k\x9Brekortet.\n";
	const string Kons50 = "Personen indkaldes foran an dommer.\n";
	const string Kon100 = "Personen skal direkte i f\x91ngsel med vand og br\x9B""d.\n";

	if (ProcentOverskridelse >= 30 && ProcentOverskridelse < 50) {
		cout << Kons30 << endl;
	}
	else if (ProcentOverskridelse >= 50 && ProcentOverskridelse < 100) {
		cout << Kons50 << endl;
	}
	else if (ProcentOverskridelse >= 100) {
		cout << Kon100 << endl;
	}
	else if (ProcentOverskridelse >= 1 && ProcentOverskridelse < 30) {
		cout << Kons10 << endl; 
	}
	return 0;
}