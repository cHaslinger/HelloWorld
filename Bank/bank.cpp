#include "bank.h"
#include <string>
#include <iostream>


//Implementierung der Methoden, die zur Klasse bank gehören

/*! Initialisierung bzw. Vorbelegung der Eigenschaften*/
bank::bank(std::string benutzername, std::string pin, int kontostand)
{
    Benutzername = benutzername;
    PIN = pin;
    Kontostand = kontostand;
}

//! Zugriff überprüfen
/*! überprüft ob Zugriff erlaubt ist, d.h. ob Benutzername und Passwort übereinstimmen*/
bool bank::zugriff_ueberpruefen(const kunde& k)
{
    if (Benutzername == k.get_Benutzername() && PIN == k.get_PIN()){
        return true;
    }
    return false;
}

//! Geld abheben
/*! überprüft ob genug Geld am Konto ist um den gewünschten Betrag abzuheben*/
bool bank::geld_abheben(int betrag)
{
    if (Kontostand >= betrag){
        //a -= b bedeutet a = a - b
        Kontostand -= betrag;
        return true;
    }
    return false;
}
