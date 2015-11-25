#ifndef CL_CUSTOMER_H
#define CL_CUSTOMER_H
#include <list>

class cl_customer
{
public:
    //!Default-Konstruktor
    cl_customer();
    //!Parameter-Konstruktor
    /*! definiert einen neuen Kunden mit Eingabe von
     * Namen, Pin, Status (normal oder besonders), und Kontostand */
    cl_customer(std::string _name, std::string _pin,
                std::string _status, std::string _accountBalance);
    //! (bool type) checkAcces
    /*! überprüft ob der neue Kunde bereits Bestandkunde ist */
    void newCustomer();
    bool checkAccess(std::list<std::string> _newCustomer);

protected:
    std::list<std::string> m_customerList;

private:
    std::list<std::string> m_newCustomer;


};

#endif // CL_CUSTOMER_H


