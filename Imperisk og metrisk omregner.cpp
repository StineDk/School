#include <iostream>
using namespace std;

int main()
{
    string Type;
    string M�leenhed;
    //M�leenheder 
    double V�rdi;
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
        cin >> M�leenhed;
        cout << endl;

        if (M�leenhed == "Mile" || M�leenhed == "mile")
        {
            //Omregn meter til mile.
            cout << "Antal meter. \n";
            cin >> V�rdi;
            Udregning = V�rdi / MeterPrMile;
            cout << Udregning << " mile. \n\n";
        }
        if (M�leenhed == "Yard" || M�leenhed == "yard")
        {
            //Omregn meter til yard.
            cout << "Antal meter. \n";
            cin >> V�rdi;
            cout << endl;
            Udregning = V�rdi / MeterPrYard;
            cout << Udregning << " yard. \n\n";
        }
        if (M�leenhed == "Foot" || M�leenhed == "foot")
        {
            //Omregn meter til foot.
            cout << "Antal meter. \n";
            cin >> V�rdi;
            cout << endl;
            Udregning = V�rdi / MeterPrFoot;
            cout << Udregning << " foot. \n\n";
        }
        if (M�leenhed == "Inch" || M�leenhed == "inch")
        {
            //Omregn meter til inch.
            cout << "Antal meter. \n";
            cin >> V�rdi;
            cout << endl;
            Udregning = V�rdi / MeterPrInch;
            cout << Udregning << " inch. \n\n";
        }
        if (M�leenhed == "Acre" || M�leenhed == "acre")
        {
            //Omregn hektar til acre.
            cout << "Antal hektar. \n";
            cin >> V�rdi;
            cout << endl;
            Udregning = V�rdi / HektarPrAcre;
            cout << Udregning << " acre \n\n";
        }
        if (M�leenhed == "Gallon" || M�leenhed == "gallon")
        {
            //Omregn milliliter til US gallon.
            cout << "Atal milliliter. \n";
            cin >> V�rdi;
            cout << endl;
            Udregning = V�rdi / MilliliterPrGallon;
            cout << Udregning << " gallon. \n\n";
        }
        if (M�leenhed == "Pint" || M�leenhed == "pint")
        {
            //Omregn milliliter til pint.
            cout << "Atal milliliter. \n";
            cin >> V�rdi;
            cout << endl;
            Udregning = V�rdi / MilliliterPrPint;
            cout << Udregning << " pint. \n\n";
        }
        if (M�leenhed == "FluidOunce" || M�leenhed == "fluidounce")
        {
            //Omregn milliliter til fluid ounce.
            cout << "Antal milliliter. \n";
            cin >> V�rdi;
            cout << endl;
            Udregning = V�rdi / MilliliterPrFluidOunce;
            cout << Udregning << " fluid ounce. \n\n";
        }
        if (M�leenhed == "Stone" || M�leenhed == "stone")
        {
            //Omregn kg til stone.
            cout << "Antal kg. \n";
            cin >> V�rdi;
            cout << endl;
            Udregning = V�rdi / KgPrStone;
            cout << Udregning << " stone. \n\n";
        }
        if (M�leenhed == "Pound" || M�leenhed == "pound")
        {
            //Omregn kg til pound.
            cout << "Antal kg. \n";
            cin >> V�rdi;
            cout << endl;
            Udregning = V�rdi / KgPrPound;
            cout << Udregning << " pound. \n\n";
        }
        if (M�leenhed == "Ounce" || M�leenhed == "ounce")
        {
            //Omregn gram til ounce.
            cout << "Antal gram. \n";
            cin >> V�rdi;
            cout << endl;
            Udregning = V�rdi / GPrOunce;
            cout << Udregning << " ounce. \n\n";
        }
        if (M�leenhed == "Fahrenheit" || M�leenhed == "fahrenheit")
        {
            //Omregn celsius til fahrenheit.
            cout << "Antal grader C. \n";
            cin >> V�rdi;
            Udregning = V�rdi * 1.8 + 32;
            cout << Udregning << "Fahrenheit \n\n";
        }
    }
    if (Type == "2" || Type == "fra")
    {
        cout << "Hvilken m\x86le enhed omregner du fra? \n";
        cin >> M�leenhed;
        cout << endl;

        if (M�leenhed == "Mile" || M�leenhed == "mile")
        {
            //Omregn mile til meter.
            cout << "Antal mile. \n";
            cin >> V�rdi;
            cout << endl;
            Udregning = MeterPrMile * V�rdi;
            cout << Udregning << " m/meter \n\n";
        }
        if (M�leenhed == "Yard" || M�leenhed == "yard")
        {
            //Omregn yard til meter.
            cout << "Antal yard. \n";
            cin >> V�rdi;
            cout << endl;
            Udregning = MeterPrYard * V�rdi;
            cout << Udregning << " m/meter \n\n";
        }
        if (M�leenhed == "Foot" || M�leenhed == "foot")
        {
            //Omregn foot til meter.
            cout << "Antal foot. \n";
            cin >> V�rdi;
            cout << endl;
            Udregning = MeterPrFoot * V�rdi;
            cout << Udregning << " m/meter \n\n";
        }
        if (M�leenhed == "Inch" || M�leenhed == "inch")
        {
            //Omregn inch til meter.
            cout << "Antal inch. \n";
            cin >> V�rdi;
            cout << endl;
            Udregning = MeterPrInch * V�rdi;
            cout << Udregning << " m/meter \n\n";
        }
        if (M�leenhed == "Acre" || M�leenhed == "acre")
        {
            //Omregn acre til hektar.
            cout << "Antal acre. \n";
            cin >> V�rdi;
            cout << endl;
            Udregning = HektarPrAcre * V�rdi;
            cout << Udregning << " Hektar \n\n";
        }
        if (M�leenhed == "Gallon" || M�leenhed == "gallon")
        {
            //Omregn US gallon til milliliter.
            cout << "Atal gallon. \n";
            cin >> V�rdi;
            cout << endl;
            Udregning = MilliliterPrGallon * V�rdi;
            cout << Udregning << " ml/milliliter \n\n";
        }
        if (M�leenhed == "Pint" || M�leenhed == "pint")
        {
            //Omregn pint til milliliter.
            cout << "Atal pint. \n";
            cin >> V�rdi;
            cout << endl;
            Udregning = MilliliterPrPint * V�rdi;
            cout << Udregning << " ml/milliliter \n\n";
        }
        if (M�leenhed == "FluidOunce" || M�leenhed == "fluidounce")
        {
            //Omregn fluid ounce til milliliter.
            cout << "Antal Fluid Ounce. \n";
            cin >> V�rdi;
            cout << endl;
            Udregning = MilliliterPrFluidOunce * V�rdi;
            cout << Udregning << " ml/milliliter \n\n";
        }
        if (M�leenhed == "Stone" || M�leenhed == "stone")
        {
            //Omregn stone til kg.
            cout << "Antal stone. \n";
            cin >> V�rdi;
            cout << endl;
            Udregning = KgPrStone * V�rdi;
            cout << Udregning << " kg/kilogram \n\n";
        }
        if (M�leenhed == "Pound" || M�leenhed == "pound")
        {
            //Omregn pound til kg.
            cout << "Antal pound. \n";
            cin >> V�rdi;
            cout << endl;
            Udregning = KgPrPound * V�rdi;
            cout << Udregning << " kg/kilogram \n\n";
        }
        if (M�leenhed == "Ounce" || M�leenhed == "ounce")
        {
            //Omregn ounce til gram.
            cout << "Antal ounce. \n";
            cin >> V�rdi;
            cout << endl;
            Udregning = GPrOunce * V�rdi;
            cout << Udregning << " ounce. \n\n";
        }
        if (M�leenhed == "Fahrenheit" || M�leenhed == "fahrenheit")
        {
            //Omregn fahrenheit til celsius.
            cout << "Antal grader F. \n";
            cin >> V�rdi;
            Udregning = (V�rdi - 32) * 5 / 9;
            cout << Udregning << "Celsius \n\n";
        }
    }
    string F�rdig;
    //Vil du starte programmet igen, eller lukke det.
    cout << "Vil du k\x9Bre programmet igen?   1)Ja.   2)Nej. \n";
    cin >> F�rdig;
    cout << endl << endl;
    
    if (F�rdig == "1" || F�rdig == "ja")
    {
        goto label;
    }
    if (F�rdig == "2" || F�rdig == "nej")
    {
        exit;
    }
}