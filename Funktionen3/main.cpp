#include <iostream>

using namespace std;

void start()
{
    cout << "Das Spiel startet!";
}
void laden()
{
    cout << "Das Spiel ist geladen!";
}
void playmultiplayer()
{
    cout << "Multiplayermodus aktiviert! ";
}

int main()
{
  int input;

  cout<<"1. Spiel starten\n";
  cout<<"2. Spiel laden\n";
  cout<<"3. Multiplayermodus aktivieren\n";
  cout<<"4. Exit\n";
  cout<<"Triff deine Auswahl: ";
  cin>> input;
  switch ( input ) {
  case 1:
    start();
    break;
  case 2:
    laden();
    break;
  case 3:
    playmultiplayer();
    break;
  case 4:
    cout<<"Danke fürs Bedienen!\n";
    break;
  default:
    cout<<"Keine korrekte Eingabe! \n";
    break;
  }
  cin.get();
}
