#include <iostream>
using namespace std;

int main()
{
    string Type;
    string Måleenhed;
    //Måleenheder 
    double Værdi;
    //Omregnings faktor
    double MeterPrMile = 1609.344;
    double MeterPrYard = 0.9144;
    double MeterPrFoot = 0.3048;
    double MeterPrInch = 0.0254;
    double HektarPrAcre = 0.40468564224;
    double MilliliterPrGallon = 3785.41;
    double MilliliterPrPint = 568.26125; 
    double MilliliterPrFluidOunce = 28.4130625;
    double KgPrStone = 6.35029318;
    double KgPrPound = 0.45359237;
    double GPrOunce = 28.34952337;
    //Omregnet
    double Udregning;

    cout << "Imperiske m\x86le enheder. \n";
    cout << "Mile, Yard, Foot, Inch, Acre, Gallon, Pint, FluidOunce, Stone, Pound, Ounce, Fahrenheit. \n\n";
    label:
    cout << "Vil du omregne? \n1)til imperisk tal. \n2)fra imperisk tal? \n";
    cin >> Type;
    cout << endl;

    if (Type == "1" || Type == "til")
    {
        cout << "Hvilken m\x86le enhed vil du omregne til? \n";
        cin >> Måleenhed;
        cout << endl;

        if (Måleenhed == "Mile" || Måleenhed == "mile")
        {
            //Omregn meter til mile.
            cout << "Antal meter. \n";
            cin >> Værdi;
            Udregning = Værdi / MeterPrMile;
            cout << Udregning << " mile. \n\n";
        }
        if (Måleenhed == "Yard" || Måleenhed == "yard")
        {
            //Omregn meter til yard.
            cout << "Antal meter. \n";
            cin >> Værdi;
            cout << endl;
            Udregning = Værdi / MeterPrYard;
            cout << Udregning << " yard. \n\n";
        }
        if (Måleenhed == "Foot" || Måleenhed == "foot")
        {
            //Omregn meter til foot.
            cout << "Antal meter. \n";
            cin >> Værdi;
            cout << endl;
            Udregning = Værdi / MeterPrFoot;
            cout << Udregning << " foot. \n\n";
        }
        if (Måleenhed == "Inch" || Måleenhed == "inch")
        {
            //Omregn meter til inch.
            cout << "Antal meter. \n";
            cin >> Værdi;
            cout << endl;
            Udregning = Værdi / MeterPrInch;
            cout << Udregning << " inch. \n\n";
        }
        if (Måleenhed == "Acre" || Måleenhed == "acre")
        {
            //Omregn hektar til acre.
            cout << "Antal hektar. \n";
            cin >> Værdi;
            cout << endl;
            Udregning = Værdi / HektarPrAcre;
            cout << Udregning << " acre \n\n";
        }
        if (Måleenhed == "Gallon" || Måleenhed == "gallon")
        {
            //Omregn milliliter til US gallon.
            cout << "Atal milliliter. \n";
            cin >> Værdi;
            cout << endl;
            Udregning = Værdi / MilliliterPrGallon;
            cout << Udregning << " gallon. \n\n";
        }
        if (Måleenhed == "Pint" || Måleenhed == "pint")
        {
            //Omregn milliliter til pint.
            cout << "Atal milliliter. \n";
            cin >> Værdi;
            cout << endl;
            Udregning = Værdi / MilliliterPrPint;
            cout << Udregning << " pint. \n\n";
        }
        if (Måleenhed == "FluidOunce" || Måleenhed == "fluidounce")
        {
            //Omregn milliliter til fluid ounce.
            cout << "Antal milliliter. \n";
            cin >> Værdi;
            cout << endl;
            Udregning = Værdi / MilliliterPrFluidOunce;
            cout << Udregning << " fluid ounce. \n\n";
        }
        if (Måleenhed == "Stone" || Måleenhed == "stone")
        {
            //Omregn kg til stone.
            cout << "Antal kg. \n";
            cin >> Værdi;
            cout << endl;
            Udregning = Værdi / KgPrStone;
            cout << Udregning << " stone. \n\n";
        }
        if (Måleenhed == "Pound" || Måleenhed == "pound")
        {
            //Omregn kg til pound.
            cout << "Antal kg. \n";
            cin >> Værdi;
            cout << endl;
            Udregning = Værdi / KgPrPound;
            cout << Udregning << " pound. \n\n";
        }
        if (Måleenhed == "Ounce" || Måleenhed == "ounce")
        {
            //Omregn gram til ounce.
            cout << "Antal gram. \n";
            cin >> Værdi;
            cout << endl;
            Udregning = Værdi / GPrOunce;
            cout << Udregning << " ounce. \n\n";
        }
        if (Måleenhed == "Fahrenheit" || Måleenhed == "fahrenheit")
        {
            //Omregn celsius til fahrenheit.
            cout << "Antal grader C. \n";
            cin >> Værdi;
            Udregning = Værdi * 1.8 + 32;
            cout << Udregning << "Fahrenheit \n\n";
        }
    }
    if (Type == "2" || Type == "fra")
    {
        cout << "Hvilken m\x86le enhed omregner du fra? \n";
        cin >> Måleenhed;
        cout << endl;

        if (Måleenhed == "Mile" || Måleenhed == "mile")
        {
            //Omregn mile til meter.
            cout << "Antal mile. \n";
            cin >> Værdi;
            cout << endl;
            Udregning = MeterPrMile * Værdi;
            cout << Udregning << " m/meter \n\n";
        }
        if (Måleenhed == "Yard" || Måleenhed == "yard")
        {
            //Omregn yard til meter.
            cout << "Antal yard. \n";
            cin >> Værdi;
            cout << endl;
            Udregning = MeterPrYard * Værdi;
            cout << Udregning << " m/meter \n\n";
        }
        if (Måleenhed == "Foot" || Måleenhed == "foot")
        {
            //Omregn foot til meter.
            cout << "Antal foot. \n";
            cin >> Værdi;
            cout << endl;
            Udregning = MeterPrFoot * Værdi;
            cout << Udregning << " m/meter \n\n";
        }
        if (Måleenhed == "Inch" || Måleenhed == "inch")
        {
            //Omregn inch til meter.
            cout << "Antal inch. \n";
            cin >> Værdi;
            cout << endl;
            Udregning = MeterPrInch * Værdi;
            cout << Udregning << " m/meter \n\n";
        }
        if (Måleenhed == "Acre" || Måleenhed == "acre")
        {
            //Omregn acre til hektar.
            cout << "Antal acre. \n";
            cin >> Værdi;
            cout << endl;
            Udregning = HektarPrAcre * Værdi;
            cout << Udregning << " Hektar \n\n";
        }
        if (Måleenhed == "Gallon" || Måleenhed == "gallon")
        {
            //Omregn US gallon til milliliter.
            cout << "Atal gallon. \n";
            cin >> Værdi;
            cout << endl;
            Udregning = MilliliterPrGallon * Værdi;
            cout << Udregning << " ml/milliliter \n\n";
        }
        if (Måleenhed == "Pint" || Måleenhed == "pint")
        {
            //Omregn pint til milliliter.
            cout << "Atal pint. \n";
            cin >> Værdi;
            cout << endl;
            Udregning = MilliliterPrPint * Værdi;
            cout << Udregning << " ml/milliliter \n\n";
        }
        if (Måleenhed == "FluidOunce" || Måleenhed == "fluidounce")
        {
            //Omregn fluid ounce til milliliter.
            cout << "Antal Fluid Ounce. \n";
            cin >> Værdi;
            cout << endl;
            Udregning = MilliliterPrFluidOunce * Værdi;
            cout << Udregning << " ml/milliliter \n\n";
        }
        if (Måleenhed == "Stone" || Måleenhed == "stone")
        {
            //Omregn stone til kg.
            cout << "Antal stone. \n";
            cin >> Værdi;
            cout << endl;
            Udregning = KgPrStone * Værdi;
            cout << Udregning << " kg/kilogram \n\n";
        }
        if (Måleenhed == "Pound" || Måleenhed == "pound")
        {
            //Omregn pound til kg.
            cout << "Antal pound. \n";
            cin >> Værdi;
            cout << endl;
            Udregning = KgPrPound * Værdi;
            cout << Udregning << " kg/kilogram \n\n";
        }
        if (Måleenhed == "Ounce" || Måleenhed == "ounce")
        {
            //Omregn ounce til gram.
            cout << "Antal ounce. \n";
            cin >> Værdi;
            cout << endl;
            Udregning = GPrOunce * Værdi;
            cout << Udregning << " ounce. \n\n";
        }
        if (Måleenhed == "Fahrenheit" || Måleenhed == "fahrenheit")
        {
            //Omregn fahrenheit til celsius.
            cout << "Antal grader F. \n";
            cin >> Værdi;
            Udregning = (Værdi - 32) * 5 / 9;
            cout << Udregning << "Celsius \n\n";
        }
    }
    string Færdig;
    //Vil du starte programmet igen, eller lukke det.
    cout << "Vil du k\x9Bre programmet igen?   1)Ja.   2)Nej. \n";
    cin >> Færdig;
    cout << endl << endl;
    
    if (Færdig == "1" || Færdig == "ja")
    {
        goto label;
    }
    if (Færdig == "2" || Færdig == "nej")
    {
        exit;
    }
}