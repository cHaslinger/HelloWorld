#ifndef CL_BANK_H
#define CL_BANK_H
#include <string>
#include <map>
#include "cl_customer.h"

//! Klasse cl_bank
class cl_bank
{
private:
    std::map<std::string, m_customer> customerList;    /*! <map Liste aller Kunden> */

protected:
    /*!
    struct m_customer
    {
        std::string _name;     /*!< string Name des Kunden */
        std::string _pin;      /*!< string Name des Kunden */
        float _accountBalance; /*!< float Kontostand des Kunden */
        int _status;
    };
    */
//struct notwendig??? wie sonst alle Infos speichern und Name und Pin vergleichen?
//andere Möglichkeit map mit name und pin, und noch eine map? oder multimap?

public:
    //@{
    //! Constructor
    /*! Bank-Initialisierung */
    cl_bank();
    //@}
    //@{
    //! (bool type) checkAccess
    /*! überprüft ob name und pin übereinstimmen */
    bool cl_bank::checkAccess();
    //! (void type) Neuer Kunde
    /*! speichert einen neuen Kunden in der Kundenliste */
    void newCustomer(std::string __name, std::string __pin, float __accountBalance, int __status);
    //@}

signals:

public slots:
};

#endif // CL_BANK_H

