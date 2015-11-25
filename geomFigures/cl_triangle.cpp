#include "cl_triangle.h"
#include <iostream>
#include <math.h>

//! Default Construktor
/*! bei der Initialisierung des Dreiecks werden die drei Seiten eingelesen */
cl_triangle::cl_triangle()
{
    getData();
}
//! Initialisierung der virtuellen Methoden
//@{
//! (void type) getData
/*! Methode um die drei Seiten einzulesen */
void cl_triangle::getData()
{
    std::cout << "Type values for the three sides of triangle:"<< std::endl;
    std::cin >> m_a >> m_b >> m_c;
}
 //! (float type) area
    /*! Methode um den Flächeninhalt des Dreiecks zu berechnen */
float cl_triangle::area()
{
    float s = (m_a+m_b+m_c)/2;
    return sqrt(s*(s-m_a)*(s-m_b)*(s-m_c));
}
//@}


