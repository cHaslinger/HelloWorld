#ifndef KUNDE_H //was macht das?? wie heißt das?
#define KUNDE_H
#include <string>

//Definition der Klasse Kunde
class kunde //cl_kunde
{
public:
    //@{  //Blöcke
    void PIN_eingeben();
    //! Implementierung der Methoden der Klasse Kunde
    void geldkarte_einschieben();
    int betrag_waehlen();
    //@}
    //@{
    //! übergibt konstante Referenz auf #Benutzername
    //Kurzkommentar
    const std::string& get_Benutzername() const;
    //! übergibt konstante Referenz auf PIN
    const std::string& get_PIN() const;
    //@}
private:
    //@{
    //! Benutzername des Kunden
    std::string Benutzername;
    //! PIN des Kunden
    std::string PIN;
    //@}

    //doxygen installieren ->html
    //dokumentieren
    //member variablen einheitlich (_membervar)
    //Parameter von Funktionen __var
    //Constructor
    //Vererbung Klassen: Elternklasse Kunde, zwei Kinderklassen Kunde und benachteiligter Kunde unterschiedliche Merkmale
    //10 Kunden nicht 10 member var
    //container aussuchen und begründen
    //const correctness


    //Kontostand
    //static Funktion
    //Vererbung ctutorial
    //templates nach klassen was und warum?



    //signals:

    //public slots:
};

#endif // KUNDE_H
