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
    float K�rselNul;
    float K�rselOpkastNul;
    float K�rselEn;
    float K�rselOpkastEn;
    float K�rselTo;
    float K�rselOpkastTo;
    double K�rselTre;
    double K�rselOpkastTre;

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
            // Prisen n�r kunden har kastet op.
            K�rselOpkastNul = (Km * KmPris) + Opkastgebyr + Opstart;
            cout << K�rselOpkastNul;
        }
        if (Opkast == "nej") {
            // Prisen n�r kunden ikke har kastet op.
            K�rselNul = (Km * KmPris) + Opstart;
            cout << K�rselNul;
        }
    }

    if (Km > 100 && Km < 151) {
        // Har Kunden kastet op?
        cout << "Har kunden kastet op? ";
        cin >> Opkast;

        if (Opkast == "ja") {
            // Prisen n�r kunden har kastet op.
            K�rselOpkastEn = ((Km * KmPris) * 0.9) + Opkastgebyr + Opstart;
            cout << K�rselOpkastEn;
        }
        if (Opkast == "nej") {
            // Prisen n�r kunden ikke har kastet op.
            K�rselEn = ((Km * KmPris) * 0.9) + Opstart;
            cout << K�rselEn;
        }
    }

    if (Km > 150 && Km < 201) {
        // Har kunden kastet op?
        cout << "Har kunden kastet op? ";
        cin >> Opkast;

        if (Opkast == "ja") {
            // Prisen n�r kunden har kastet op.
            K�rselOpkastTo = ((Km * KmPris) * 0.8) + Opkastgebyr + Opstart;
            cout << K�rselOpkastTo;
        }
        if (Opkast == "nej") {
            // Prisen n�r kunden ikke har kastet op.
            K�rselTo = ((Km * KmPris) * 0.8) + Opstart;
            cout << K�rselTo;
        }
    }

    if (Km > 200) {
        // Har kunden kastet op?
        cout << "Har kunden kastet op? ";
        cin >> Opkast;

        if (Opkast == "ja") {
            // Prisen n�r kunden har kastet op.
            K�rselOpkastTre = ((Km * KmPris) * 0.7) + Opkastgebyr + Opstart;
            cout << K�rselOpkastTre;
        }
        if (Opkast == "nej") {
            // Prisen n�r kunden ikke har kastet op.
            K�rselTre = ((Km * KmPris) * 0.7) + Opstart;
            cout << K�rselTre;
        }
    }
}

