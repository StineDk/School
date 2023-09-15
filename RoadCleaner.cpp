// RoadCleaner.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int StartPris, Skrab, Klip;
    StartPris = 750;
    Skrab = 100;
    Klip = 50;
    int Meter;
    int PrisSkrab;
    int PrisKlip;

    string Type;
    // Vælg mellem klip eller skrab
    cout << "V\x91lg 1. klip eller 2. skrab: \n";
    cin >> Type;

    if (Type == "1" || Type == "klip") {
        // Definere antal meter 
        cout << "Skriv antal meter (1 = 100m): \n";
        cin >> Meter;

        // Udregning for pris for en klipning
        PrisKlip = (Klip * Meter) + StartPris;

        cout << "Pris for klipning " << PrisKlip << ",- DKK. \n";
    }
    // else if
    if (Type == "2" || Type == "skrab") {
        // Definere Antal meter
        cout << "Skrive antal meter (1 = 100m): \n";
        cin >> Meter;

        // Udregning for pris af skrabning
        PrisSkrab = (Skrab * Meter) + StartPris;

        cout << "Pris for skrabning " << PrisSkrab << ",- DKK. \n";
    }
}

