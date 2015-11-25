#ifndef CL_SAVINGS_H
#define CL_SAVINGS_H


class cl_savings
{
private:
    std::string _name;     /*!< string Name des Kunden */
    std::string _pin;      /*!< string Name des Kunden */
    float _accountBalance; /*!< float Kontostand des Kunden */
    int _status;

public:
    cl_savings();

signals:

public slots:
};

#endif // CL_SAVINGS_H
