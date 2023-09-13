// Road Cleaner1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int StartPris, Skrab, Meter;
    StartPris = 750;
    float Klip = 50. / 100.;
    Skrab = 100 / 100;
    Meter;
    
    // Kunden skal have klippet 1500 meter
    cout << Klip * 1500 + StartPris << endl;
    // Kunden skla have skrabbet 1500 meter
    cout << Skrab * 1500 + StartPris << endl;

    string Type;
    // Vælg mellem Klip eller Skrab
    cout << "Vælg Klip eller Skrab";
    cin >> Type; 

    {
        
    }
}