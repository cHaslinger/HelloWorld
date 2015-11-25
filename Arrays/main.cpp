#include <QCoreApplication>
#include <iostream>

using namespace std;

int mult(int a, int b)
{
return a*b;
};

int main()
{
  int i, j;
  cout<< "Bitte Größe des Arrays eingeben: \n";
  cin>> i >> j;
  int array[i][j]; //Array initialisieren

  for (int x = 0; x < i; x++ ) {    //Es  soll in jedem Feld einen Wert stehen
    for (int y = 0; y < 8; y++ )
      array[x][y] = mult(x,y);      //Werte werden zugewiesen
  }
  cout<<"Indizes des Arrays:\n";    //Alle Werte sollen ausgegeben werden
  for (int x = 0; x < j;x++ ) {
    for (int y = 0; y < 8; y++ )
      cout<<"["<<x<<"]["<<y<<"]="<< array[x][y] <<"  ";
    cout<<"\n";
  }
  cin.get();
}
