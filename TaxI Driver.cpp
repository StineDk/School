// TaxI Driver.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int Opkastgebyr = 1500;
    int KmPris = 2;
    int Opstart = 75;
    string Opkast;
    float KørselNul;
    float KørselOpkastNul;
    float KørselEn;
    float KørselOpkastEn;
    float KørselTo;
    float KørselOpkastTo;
    double KørselTre;
    double KørselOpkastTre;

    int Km;
    // Skriv distancen.
    cout << "Afrund dit km til h\x9Bjeste hele tal. \n";
    cout << "Skriv antal km kunden skal k\x9Bres: ";
    cin >> Km;

    if (Km <= 100) {
        // Har Kunden Kastet op?
        cout << "Har kunden kastet op? ";
        cin >> Opkast;

        if (Opkast == "ja") {
            // Prisen når kunden har kastet op.
            KørselOpkastNul = (Km * KmPris) + Opkastgebyr + Opstart;
            cout << KørselOpkastNul;
        }
        if (Opkast == "nej") {
            // Prisen når kunden ikke har kastet op.
            KørselNul = (Km * KmPris) + Opstart;
            cout << KørselNul;
        }
    }

    if (Km > 100 && Km < 151) {
        // Har Kunden kastet op?
        cout << "Har kunden kastet op? ";
        cin >> Opkast;

        if (Opkast == "ja") {
            // Prisen når kunden har kastet op.
            KørselOpkastEn = ((Km * KmPris) * 0.9) + Opkastgebyr + Opstart;
            cout << KørselOpkastEn;
        }
        if (Opkast == "nej") {
            // Prisen når kunden ikke har kastet op.
            KørselEn = ((Km * KmPris) * 0.9) + Opstart;
            cout << KørselEn;
        }
    }

    if (Km > 150 && Km < 201) {
        // Har kunden kastet op?
        cout << "Har kunden kastet op? ";
        cin >> Opkast;

        if (Opkast == "ja") {
            // Prisen når kunden har kastet op.
            KørselOpkastTo = ((Km * KmPris) * 0.8) + Opkastgebyr + Opstart;
            cout << KørselOpkastTo;
        }
        if (Opkast == "nej") {
            // Prisen når kunden ikke har kastet op.
            KørselTo = ((Km * KmPris) * 0.8) + Opstart;
            cout << KørselTo;
        }
    }

    if (Km > 200) {
        // Har kunden kastet op?
        cout << "Har kunden kastet op? ";
        cin >> Opkast;

        if (Opkast == "ja") {
            // Prisen når kunden har kastet op.
            KørselOpkastTre = ((Km * KmPris) * 0.7) + Opkastgebyr + Opstart;
            cout << KørselOpkastTre;
        }
        if (Opkast == "nej") {
            // Prisen når kunden ikke har kastet op.
            KørselTre = ((Km * KmPris) * 0.7) + Opstart;
            cout << KørselTre;
        }
    }
}

