#include <iostream>
using namespace std;

int Omregn();
int Valuta; 
float Resultat;
float NyResultat;

int main() {
    int Opkastgebyr = 1500;
    int KmPris = 2;
    int Opstart = 75;
    string Opkast;
    int Færdig;

    int Km;
    // Skriv distancen.
    cout << "Afrund dit km til h\x9Bjeste hele tal. \n";
    cout << "Skriv antal km kunden skal k\x9Bres:\n";
    cin >> Km;

    if (Km <= 100) {
        // Har Kunden Kastet op?
        cout << "Har kunden kastet op?\n";
        cin >> Opkast;

        if (Opkast == "ja") {
            // Prisen når kunden har kastet op.
            Resultat = (Km * KmPris) + Opkastgebyr + Opstart;
        }
        if (Opkast == "nej") {
            // Prisen når kunden ikke har kastet op.
            Resultat = (Km * KmPris) + Opstart;
        }
    }

    else if (Km > 100 && Km < 151) {
        // Har Kunden kastet op?
        cout << "Har kunden kastet op?\n";
        cin >> Opkast;

        if (Opkast == "ja") {
            // Prisen når kunden har kastet op.
            Resultat = ((Km * KmPris) * 0.9) + Opkastgebyr + Opstart;
        }
        if (Opkast == "nej") {
            // Prisen når kunden ikke har kastet op.
            Resultat = ((Km * KmPris) * 0.9) + Opstart;
        }
    }

    else if (Km > 150 && Km < 201) {
        // Har kunden kastet op?
        cout << "Har kunden kastet op?\n";
        cin >> Opkast;

        if (Opkast == "ja") {
            // Prisen når kunden har kastet op.
            Resultat = ((Km * KmPris) * 0.8) + Opkastgebyr + Opstart;
        }
        if (Opkast == "nej") {
            // Prisen når kunden ikke har kastet op.
            Resultat = ((Km * KmPris) * 0.8) + Opstart;
        }
    }

    else if (Km > 200) {
        // Har kunden kastet op?
        cout << "Har kunden kastet op?\n";
        cin >> Opkast;

        if (Opkast == "ja") {
            // Prisen når kunden har kastet op.
            Resultat = ((Km * KmPris) * 0.7) + Opkastgebyr + Opstart;
        }
        if (Opkast == "nej") {
            // Prisen når kunden ikke har kastet op.
            Resultat = ((Km * KmPris) * 0.7) + Opstart;
        }
    }
    cout << Resultat;
    Omregn();

    //Vil du genstarte programmet.
    cout << "Vil du k\x9Bre programmet igen? \n1) Ja. \n2) Nej.\n";
    cin >> Færdig;
    cout << endl << endl;

    switch (Færdig) {
    case 1: 
        main();

    case 2: 
        exit;
    }
}

int Omregn() {
    cout << "\nHvilken valuta vil du gerne have prisen i? \n1) DKK \n2) USD \n3) EUR \n4) NOK \n5) SEK \n6) GBP \n7) JPY \n8) AUD \n9) CAD \n10) NZD \n";
    cin >> Valuta;

    switch (Valuta) {
        case 1:
            NyResultat = Resultat;
            cout << "\nKunden skal af med " << Resultat << " DKK\n\n";
            break;
        case 2: 
            //USD Valuta lå den 3/10/2023 på 712,43.
            NyResultat = Resultat * 100 / 712.43;
            cout << "\nKunden skal af med " << NyResultat << " USD\n\n";
            break;
        case 3:
            //EUR Valuta lå den 3/10/2023 på 745,84.
            NyResultat = Resultat * 100 / 745.84;
            cout << "\nKunden skal af med " << NyResultat << "EUR\n\n";
            break; 
        case 4:
            //NOK Valuta lå den 3/10/2023 på 65,28.
            NyResultat = Resultat * 100 / 65.28;
            cout << "\nKunden skal af med " << NyResultat << " NOK\n\n";
            break;
        case 5: 
            //SEK Valuta lå den 3/10/2023 på 64,09.
            NyResultat = Resultat * 100 / 64.09;
            cout << "\nKunden skal af med " << NyResultat << " SEK\n\n";
            break;
        case 6:
            //GBP Valuta lå den 3/10/2023 på 859,51.
            NyResultat = Resultat * 100 / 859.51;
            cout << "\nKunden skal af med " << NyResultat << " GBP\n\n";
            break;
        case 7:
            //JPY Valuta lå den 3/10/2023 på 4,7503.
            NyResultat = Resultat * 100 / 4.7503;
            cout << "\nKunden skal af med " << NyResultat << " JPY\n\n";
            break;
        case 8:
            //AUD Valuta lå den 3/10/2023 på 448,98.
            NyResultat = Resultat * 100 / 448.98;
            cout << "\nKunden skal af med " << NyResultat << " AUD\n\n";
            break;
        case 9:
            //CAD Valuta lå den 3/10/2023 på 519,21.
            NyResultat = Resultat * 100 / 519.21;
            cout << "\nKunden skal af med " << NyResultat << " CAD\n\n";
            break;
        case 10:
            // NZD Valuta lå den 3/10/2023 på 420,19.
            NyResultat = Resultat * 100 / 420.19;
            cout << "\nKunden skal af med " << NyResultat << " NZD\n\n";
    }
    return 0;
}

