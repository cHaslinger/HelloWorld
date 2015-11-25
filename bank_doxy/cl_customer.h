#ifndef CL_CUSTOMER_H
#define CL_CUSTOMER_H
#include <string>
#include <map>
#include "cl_bank.h"

//!Definition der Klasse Kunde (cl_customer)
class cl_customer : public cl_bank
{
private:
bool checkCustomerBool;
std::map <std::string, std::string>listNewCustomer; /*! <map Liste der Kunden, die den Bankomaten betätigen> */

    
public:
    //! Construktor
    /*! Initialisiert die Kunden */
    cl_customer();
    //! Deklaration der öffentlichen Methoden (cl_customer)
    //@{ 
    //! (const reference) inputName nzw. inputPin
    /*! Input-Methoden zum einlesen der Kundentaten */
    const std::string& inputName() const;    
    const std::string& inputPin() const;
    int inputAmount();
    //@}
    //@{
    //! Übergeben von konstanten Referenzen auf #name, #pin und #accountBalance
    /*! getName übergibt eine konstante Referenz auf #name */
    const std::string& getName(m_customer &c) const;
    /*! übergibt konstante Referenz auf #pin*/
    const std::string& getPin() const;
    /*! übergibt konstante Referenz auf #pin*/    
    const float& getAccountBalance(m_customer &c) const;
    const int& getStatus(m_customer &c) const;
    //@}
    //! (bool type) Zugang überprüfen
    /*! prüft ob Benutzername und Pin übereinstimmen */
    bool checkAccess(const cl_customer &c);
    //! (bool type) Abhebung überprüfen
    /*! überprüft ob sich der gewünschte Betrag vom Konto abheben lässt (Kontodeckung) */
    bool checkRemoval(const cl_customer &__c, float __amount);
    //! (float type) Kontostand abfragen
    /*! gibt den aktuellen Kontostand aus */
    float accountBalance (const cl_customer & __customer);
    void removal (const cl_customer, float _amount);

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


#endif // CL_CUSTOMER_H
