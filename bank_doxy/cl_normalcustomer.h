#ifndef CL_NORMALCUSTOMER_H
#define CL_NORMALCUSTOMER_H
#include <string>
#include <cl_customer.h>


class cl_normalCustomer : public cl_customer
{
public:
    //! Constructor
    /*! Erstellung eines neuen Kunden */
    cl_normalCustomer(std::string _name, std::string _pin, float _accountBalance);
    
   
    

signals:

public slots:
};

#endif // CL_NORMALCUSTOMER_H
