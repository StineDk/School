#include <iostream>
using namespace std;

int main() {
	string Medarbejder;
	string Arbejdsdato;
	float Start_Tid;
	float Slut_Tid;
	float Arbejdstimer;
	float Pauser;


	cout << "Hvilken dato er det i dag? \nSkriv dag-m\x86ned-\x86r\n";
	cin >> Arbejdsdato;
	cout << "\nHvad er dit fornavn?\n";
	cin >> Medarbejder;
	cout << "\nHvorn\x86r startede din arbejdsdag? \nSkriv fx 8.0\n";
	cin >> Start_Tid;
	cout << "\nHvorn\x86r Sluttede din arbejdsdag? \nVed fx kl. 16.30 skriv 16.5\n";
	cin >> Slut_Tid;
	cout << "\nHvor mange minutters pause har du haft, over hele dagen? \nVed fx 30 min skriv 0.5\n";
	cin >> Pauser;
	Arbejdstimer = Slut_Tid - Start_Tid - Pauser;
	cout << "\nDu har arbejdet " << Arbejdstimer << " i dag.\n";
	cout << "\nLoggen vil skrive:\n" << Medarbejder << " har den " << Arbejdsdato << " arbejdet " << Arbejdstimer << " timer.\n";
}
