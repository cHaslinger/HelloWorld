#include "cl_customer.h"
#include "cl_bank.h"
#include <string>
#include <iostream>
#include <map>

//! Construktor
cl_customer::cl_customer(){
    std::string _name = inputName();
    std::string _pin = inputPin();
    if(customerList[_name] == _pin())
        checkCustomerBool==true;


    :listNewCustomer.insert(std::pair(<std::string const , std::sting const>)(inputName(), inputPin()), checkCustomerBool=false
{
    if(cl_bank::checkAccess() == true) checkCustomerBool = true;
}

//! (void type) insertCard 
/*! Eingabe des Benutzernamens */
const std::string& cl_customer::inputName() const
{
    std::string __name;
    std::cout << "Please type your name:";
    std::cin >> __name;
    return __name;
}
//! (void type) inputPin 
/*! Eingabe des Pins*/
const std::string& cl_customer::inputPin() const
{
    std::string __pin;
    std::cout << "Please type your pin:";
    std::cin >> __pin;
    return __pin;
}
//! (int type) inputAmount 
/*! Eingabe eines Betrags*/
int cl_customer::inputAmount()
{
    int __amount
    std::cout << "Please type amount for removal";
    std::cin >> __amount;
    return __amount
}
//!(const reference) getName
/*! übergibt eine konstante Referenz auf m_name */
const std::string& cl_customer::getName(m_customer& c) const
{
    return c._name;
}
//!(const reference) getPin
/*! übergibt eine konstante Referenz auf m_pin */
const std::string& cl_customer::getPin(m_customer& c) const
{
    return c._pin;
}
//!(const reference auf float) getAccountBalance
/*! übergibt eine konstante Referenz auf m_accountBalance */
const float& cl_customer::getAccountBalance(m_customer& c) const
{
    return c._accountBalance;
}
//!(const reference auf int) getStatus
/*! übergibt eine konstante Referenz auf m_status */
const int& cl_customer::getStatus(m_customer& c) const
{
    return c._status;
}


//! (bool type) checkRemoval
/*! überprüft ob sich der gewünschte Betrag vom Konto abheben lässt (Kontodeckung) */
bool cl_bank::checkRemoval(const cl_customer& __c, float __amount)
{
    if(__c.getAccountBalance(__c) >= __amount)
    {
        __c.m_customer. -= __amount;
        return true;
    }
    else return false;
}
//! (float type) Kontostand abfragen
/*! gibt den aktuellen Kontostand aus */
float cl::bank account_Balance (const cl_customer& __customer)
{
   return __customer.getAccountBalance(__customer);
}

void removal (const cl_customer& _c, float _amount)
{
    _c.accountBalance(_c) = - _amount;
}
