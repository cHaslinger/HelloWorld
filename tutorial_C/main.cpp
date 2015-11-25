#include <QCoreApplication>
#include <iostream>
using namespace std;

int getNumber(int number);
int compareNumber(int numcom1, int numcom2);
int menu();
int back(int whattodo);

int main()
{
    int whattodo = 0;
    int number, numcom1, numcom2;

   cout<<" Hallo! Ich lebe!!!\n \n ";
   menu();
   cin>>whattodo;


   while(whattodo == 1){
        getNumber(number);
        menu();
        cin>>whattodo;
    }
    while(whattodo == 2){
        compareNumber(numcom1,numcom2);
        menu();
        cin>>whattodo;
    }
    while(whattodo == 9){
        back(whattodo);
        cin>>whattodo;
    }
    while(whattodo != 9 && whattodo != 1 && whattodo != 2){
        cout<<"Es wurde keine gültige Zahl eingegeben! Bitte versuche es nochmal!\n";
        back(whattodo);
        cin>>whattodo;
    }



}

int menu()  //Menü - Auswahl der verschiedenen Funktionen
{
    cout<<"Was willst du machen? \n "
          "Mit 1 kannst du eine Zahl eingeben; \n "
          "mit 2 kannst du zwei Zahlen vergleichen; \n "
          "Zurück in das Menü kommst du mit 9! \n ";
    return 0;
}
int back(int whattodo)
{
    cout<<"Zurück im Menü. Optionen: \n "
          "Mit 1 kannst du eine Zahl eingeben; \n "
          "mit 2 kannst du zwei Zahlen vergleichen; \n ";
  //  cin>> whattodo;
    return whattodo;
}

int getNumber(int number)
{
    cout<<"Bitte eine Nummer eingeben: \n ";
    cin>> number;               //speichert den eingegebenen Wert
    cin.ignore();               //ignoriert char, d.h. kein Return notwendig
    cout<<"Die eingegebene Nummer lautet: "<< number <<"\n";
    return number;
}

int compareNumber(int numcom1, int numcom2)
{
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
    return 0;
}


