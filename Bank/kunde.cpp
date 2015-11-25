#include "kunde.h"
//bank muss inkludiert werden, weil ein Objekt b der Klasse Bank hier benötigt wird
#include "bank.h"
#include <string>
#include <iostream>


void kunde::geldkarte_einschieben()
{
    std::cout << "Schieben Sie bitte Ihre Karte in den Automaten: " << std::flush;
    //Benutzername ist eine lokale Variable in der Klasse bank
    std::cin >> Benutzername;
}
 /*! blabla */
void kunde::PIN_eingeben()
{
    std::cout << "Geben Sie Ihre PIN ein: " << std::flush;
    //PIN ist Teil der Klasse kunde
    std::cin >> PIN;
    //es soll gleich überprüft werden, ob der PIN richtig ist (mit Methode aus bank)
    //dazu wir true oder false zurückgegeben

}

int kunde::betrag_waehlen()
{
    int Betrag;
    std::cout << "Geben Sie ein, wieviel Geld Sie abheben moechten: " << std::flush;
    std::cin >> Betrag;
    return Betrag;
    //es wird überprüft ob der gewünschte Betrag verfügbar, also am Konto ist
    //mit Methode aus Bank

}

const std::string& kunde::get_Benutzername() const
{
    return Benutzername;
}

const std::string& kunde::get_PIN() const
{
    return PIN;
}



