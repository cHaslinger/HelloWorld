#include <QCoreApplication>
#include <iostream.h>
#include <math.h>
#include <cl_figures.h>
#include <cl_circle.h>
#include <cl_square.h>
#include <cl_triangle.h>

//! Main-Programm
int main(int argc, char *argv[])
{
    cl_square S;
    S.showArea();
    cl_circle C;
    C.showArea();
    cl_triangle T;
    T.showArea();


    QCoreApplication a(argc, argv);

    return a.exec();
}

