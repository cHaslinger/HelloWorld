#include <QCoreApplication>
#include <iostream>
using namespace std;

int getNumber();
void compareNumber();
int menu();
int back();

int main()
{
    int whattodo = 0;

    cout<<" Hallo! Ich lebe!!! "<<endl;
    whattodo=menu();

    while(whattodo == 0 || whattodo == 1 || whattodo == 2){
        if(whattodo == 1)
            getNumber();
        else if(whattodo == 2)
            compareNumber();
        else if(whattodo == 0)
            cout<<"Zurück im Menü. Optionen:"<<endl;
        whattodo=menu();
    }
}
//Menü - Auswahl der verschiedenen Funktionen
int menu()
{
    int what1;
    cout<<"Was willst du machen? \n "
          "Mit 1 kannst du eine Zahl eingeben; \n "
          "mit 2 kannst du zwei Zahlen vergleichen; \n "
          "Zurück in das Menü kommst du mit 0! \n ";
    cin>> what1;
    cout << what1;
    return what1;
}
int back()
{
    int what2;
    cout<<"Zurück im Menü. Optionen: \n "
          "Mit 1 kannst du eine Zahl eingeben; \n "
          "mit 2 kannst du zwei Zahlen vergleichen; \n ";
    cin>> what2;
    return what2;
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


