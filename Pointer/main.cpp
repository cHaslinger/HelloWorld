
#include <iostream>

using namespace std;



struct contacts
{           //initialisiere Struktur (Tag)
  string pre_name, last_name, adress;     //Variablen (Members) die in der Stuktur gespeichert sind
  int age;
};

void menu();

int main()
{
  int whattodo=0;

  contacts person1;
 // contacts person2;  //eine neue friend Variable, die der Struktur von contacts entspricht
  contacts *pointer1, *pointer2, *pointer3;        //Pointer mit der Struktur von contacts
  pointer1 =& person1;
  person1.pre_name = "Julia";              //Variablen definieren
  person1.last_name = "Peschke";
  person1.age = 22;
  person1.adress = "Hegigasse, 5020 Salzburg";
  pointer2 = &person1;

  menu();
  cin>>whattodo;

  while(whattodo == 1){
      cout<< pointer1->adress << *pointer2->adress;
  }
}

void menu()
{
    cout<< "1. Vorhandene Kontakte aufrufen: \n"
           "2. Neuen Kontakt erstellen: \n";
}



