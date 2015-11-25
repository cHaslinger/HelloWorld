#include "cl_discustomer.h"

cl_discustomer::cl_discustomer()
{

}

//!Parameter-Konstruktor
/*! definiert einen neuen Kunden (disadvantaged) mit Eingabe von
     * Namen, Pin und Kontostand */
cl_discustomer::cl_discustomer(std::string _name, std::string _pin, float _accountBalance)
    :m_customerList.push_back(_name),
      m_customerList.push_back(_pin),
      m_customerList.push_back(_accountBalance),
      m_customerList.push_back(2);
{
}



