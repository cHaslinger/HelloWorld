#include <QCoreApplication>
#include <string>
#include <iostream>
#include "kunde.h"
#include "bank.h"

//Innerhalb dieser soll auf ein Objekt b der Klasse bank zugegriffen werden
//dieses ist aber in einer anderen Datei angelegt, daher wird extern benötigt


int main()
{
    bank b("conny", "1234", 1000);
    //kunde k wird angelegt und seine Bankdaten müssen initialisiert werden


    //Vorgang des Bankomaten wird simuliert mit einer unendlichen Schleife
    for (;;){
        kunde k; //in den Konstruktor reinschieben??
        k.geldkarte_einschieben();
        k.PIN_eingeben();

        if (b.zugriff_ueberpruefen(k) == true){
            const int Betrag = k.betrag_waehlen();
            if(b.geld_abheben(Betrag))
                std::cout << "Der gewuenschte Betrag wurde abgehoben." << std::endl;
        }
        else std::cout << "Die PIN ist falsch." << std::endl;
    }
}
