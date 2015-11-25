#include <QCoreApplication>
#include "cl_customer.h"
#include "cl_bank.h"
#include "cl_normalcustomer.h"
#include <string>
#include <iostream>
#include <map>

int main(int argc, char *argv[])
{
   /*! cl_bank::newCustomer("conny", "1234", 1000.998, 1);
    cl_bank::newCustomer("karin", "1234", 1000, 1);
    cl_bank::newCustomer("seka", "1234", 1000, 1);
    cl_bank::newCustomer("zoran", "1234", 1000, 1);
    cl_bank::newCustomer("johanna", "1234", 1000, 1);
    cl_bank::newCustomer("david", "1234", 1000, 1);
    cl_bank::newCustomer("paul", "1234", 1000, 1);
    cl_bank::newCustomer("lisa", "1234", 1000, 1);
    cl_bank::newCustomer("oma", "1234", 1000, 2);
    cl_bank::newCustomer("opa", "1234", 1000, 2);
    cl_bank::newCustomer("uropa", "1234", 1000, 2);
   */

    cl_bank b;

    
    for(;;)
    {
        cl_customer k;
        if(k.checkAccess(k) == true)
        {
            const float _amount = k.inputAmount();
            if(k.checkRemoval(k,_amount)==true)
                k.removal(k,_amount);
        }
}
   
    
    
    QCoreApplication a(argc, argv);

    return a.exec();
}

