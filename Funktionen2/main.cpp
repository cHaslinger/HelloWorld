#include <iostream>

using namespace std;

int menu()
{
    int input;
    cout << "1: Zahl eingeben \n";
    cout << "2: Zwei Zahlen vergleichen \n";
    cin >> input;
    return input;
}

int getNumber()
{
    int number;
    cout<<"Bitte eine Nummer eingeben: \n ";
    cin>> number;               //speichert den eingegebenen Wert
    cin.ignore();               //ignoriert char, d.h. kein Return notwendig
    cout<<"Die eingegebene Nummer lautet: "<< number <<"\n";
    return number;
}
void compareNumber()
{
    int numcom1, numcom2;
    cout<<"Bitte zwei Zahlen wählen und jeweils mit Enter bestätigen: \n";
    cin>> numcom1 >> numcom2;
    if(numcom1 < numcom2)
    {
        cout<<""<<numcom1<<" ist kleiner als "<<numcom2<<"\n";
    }
    else if(numcom1 > numcom2)  //wenn die erste Bedingung bei if falsch ist, dann prüfe zweite Bedingung
    {
        cout<<""<<numcom1<<" ist größer als "<<numcom2<<"\n";
    }
    else                        //wenn keine andere Bedingung zutrifft
    {
        cout<<""<<numcom1<<" ist gleich "<<numcom2<<"\n";
    }
}

int main()
{
  int input = menu();

  switch ( input ) {
  case 1:            // Achtung ein : kein ;
    getNumber();
    break;
  case 2:            //wenn input = 2 dann führt das Programm compareNumber()... ausSpiel la
    compareNumber();
    input=menu();
    break;
  default:            // wenn keine der Bedingungen zutrifft
    cout<<"Keine gültige Eingabe";
    input=menu();
    break;
  }

  cin.get();
}
