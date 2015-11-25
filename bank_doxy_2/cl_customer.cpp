#include "cl_customer.h"
#include <iostream>
#include <list>

//! Default Konstruktor
cl_customer::cl_customer()
{}

//! Konstruktor mit Parameter
/*! string _name, _pin und _status des Kunden in Liste customerList einfügen*/
cl_customer::cl_customer(std::string _name, std::string _pin,
                         std::string _status, std::string _accountBalance)
{
    m_customerList.list::push_back(_name);
    m_customerList.list::push_back(_pin);
    m_customerList.list::push_back(_accountBalance);
    m_customerList.list::push_back(_status);
}

void cl_customer::newCustomer()
{
    std::string _name;
    std::cout << "Please type your name:";
    std::cin >> _name;
    std::string _pin;
    std::cout << "Please type your pin:";
    std::cin >> _pin;
    m_newCustomer.list::push_back(_name);
    m_newCustomer.list::push_back(_pin);
}

//! (bool type) check Access
/*! überprüft ob der neuer Kunde bereits Bestandkunde ist */
bool cl_customer::checkAccess(std::list<std::string> _newCustomer)
{
    for(auto const& i: m_customerList)
    {
        if(m_customerList[i]==_newCustomer[0] && m_customerList[i]==_newCustomer[1])
        {
            float _accountBalance = float m_customerList.list::cbegin()(i+2);
            int _accountStatus = int m_customerList.list::cbegin()(i+3);
        }
    }
    m_newCustomer.push_back(_accountBalance);
    m_newCustomer.push_back(_accountStatus);
    return true;
}

