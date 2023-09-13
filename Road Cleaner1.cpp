// Road Cleaner1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    float StartPris, Skrab;
    StartPris = 750.;
    float Klip = 50. / 100.;
    Skrab = 100. / 100.;
    float Meter; 
    float Klipning;
    float Skrabning;
    
    // Kunden skal have klippet 1500 meter;
    //cout << Klip * 1500 + StartPris;
    // Kunden skla have skrabbet 1500 meter;
    //cout << Skrab * 1500 + StartPris;

    string Type;
    // Vælg mellem Klip eller Skrab;
    cout << "Vealg Klip eller Skrab";
    cin >> Type;

    if (Type == "Klip") {
        cout << "skriv antal meter (1 = 1m)";
        cin >> Meter;

        Klipning = (Klip * Meter) + StartPris;

        cout << "Klipning " << Klipning << ",- DKK \n";
    }
    // else if;
    if (Type == "Skrab") {
        cout << "Skriv antal meter (1 = 1m)";
        cin >> Meter;

        Skrabning = (Skrab * Meter) + StartPris;

        cout << "Skrabning " << Skrabning << ",- DKK \n";
    }
}