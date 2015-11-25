#include <QCoreApplication>
#include <cl_bank.h>
#include <cl_customer.h>


int main(int argc, char *argv[])
{
    cl_customer("Conny","1234",1000,1);
    cl_customer k;
    QCoreApplication a(argc, argv);

    return a.exec();
}

