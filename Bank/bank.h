#ifndef BANK_H
#define BANK_H
#include <string>
#include "kunde.h"

//Definition der Klasse Bank
class bank
{
    //öffentliche Methoden bzw. Fähigkeiten der Klasse
  public:

    //Bank initialisieren; mit init wird am Anfang festgelegt, mit welchen Werten die
    //die Eigenschaften Benutzername, PIN und Kontostand vorbelegt werden.
     bank(std::string benutzername, std::string pin, int kontostand);

    //bool gibt einen Wahrheitswert zurück
    bool zugriff_ueberpruefen(const kunde& k);
    bool geld_abheben(int betrag);

    //private Eigenschaften bzw. Variablen
  private:
    std::string Benutzername;
    std::string PIN;
    int Kontostand;

//signals:

//public slots:
};

#endif // BANK_H
