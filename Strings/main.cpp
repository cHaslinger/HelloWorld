#include <iostream> //For cout
#include <cstring>  //For the string functions

using namespace std;

int main()
{
  string name;
  char lastname[50];
  char fullname[100]; // Big enough to hold both name and lastname

  cout<<"Bitte gib deinen (Vor-) Namen ein: ";
  cin.getline (name, 50);
  if (name =="Conny" ) // Vergleicht strings
    cout<<"OH! Wir haben diesselben Namen.\n";
  else                                    // Not equal
    cout<<"Hallo! Ich heiße Conny.\n";
  int length = name.size(); //ermittelt die Länge des Namens
  cout<<"Dein Name besteht aus "<< length <<" Buchstaben!\n";
  cout<<"Gib deinen Nachnahmen ein: ";
  cin.getline (lastname, 50);
  fullname[0] = '\0';            // strcat sucht für \0 um danach einen Schnitt zu machen searches for '\0' to cat after
  strcat ( fullname, name );     // den Vornamen in fullname kopieren
  strcat ( fullname, " " );      // einen Abstand zwischen Vor- und Nachname
  strcat ( fullname, lastname ); // den Nachnamen dazukopieren
  cout<<"Dein Name ist "<< fullname <<"!\n";
  cin.get();
}
