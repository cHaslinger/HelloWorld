#include "cl_normalcustomer.h"
#include "cl_customer.h"

cl_normalCustomer::cl_normalCustomer(std::string _name, std::string _pin, float _accountBalance)
{
    struct m_customer _name = {_name, _pin, _accountBalance, 1};
};


