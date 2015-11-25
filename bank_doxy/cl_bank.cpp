#include "cl_bank.h"
#include "cl_customer.h"
#include "cl_normalcustomer.h"
#include <string>
#include <iostream>

//! Constructor 
/*! Definition der Kunden */

/*!
cl_bank::cl_bank()
{
    m_name = __name;
    m_pin = __pin;
    m_accountBalance == __accountBalance;
}
//! Construktor
/*! (Kundeninitialisierung) speichert einen neuen Kunden in der Kundenliste ab
cl_bank::cl_bank(int id, std::string __name, std::string __pin, float __accountBalance, int __status);
*/


cl_bank::cl_bank()
{
    newCustomer("conny", "1234", 1000.998, 1);
    newCustomer("karin", "1234", 1000, 1);
    newCustomer("seka", "1234", 1000, 1);
    newCustomer("zoran", "1234", 1000, 1);
    newCustomer("johanna", "1234", 1000, 1);
    newCustomer("david", "1234", 1000, 1);
    newCustomer("paul", "1234", 1000, 1);
    newCustomer("lisa", "1234", 1000, 1);
    newCustomer("oma", "1234", 1000, 2);
    newCustomer("opa", "1234", 1000, 2);
    newCustomer("uropa", "1234", 1000, 2);

}

void cl_bank::newCustomer(std::string __name, std::string __pin, float __accountBalance, int __status)
{
    if(__status==1)
    {
        customerList.insert (std::pair<std::string, m_customer>
                             (__name, struct m_customer(__name, __pin, __accountBalance)
                              )
                             );
    }
    if(__status==2)
    {
        customerList.insert (std::pair<int, cl_customer:m_customer>
                             (id, cl_normalCustomer
                              (__name, __pin, __accountBalance)
                              )
                             );
    }
}

//! (bool type) checkAccess
/*! prüft ob Benutzername und Pin übereinstimmen */
bool cl_bank::checkAccess(const & listNewCustomer)
{
    getName(c);
    std::str __pin = c.getPin(c);
    if(customerList[__name] == c)
        return true;
    else return false;
}
