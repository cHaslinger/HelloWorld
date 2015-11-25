#include <iostream>
#include "cl_square.h"

//! Default Construktor
/*! bei der Initialisierung des Quadrats wird der Wert für die Seite eingelesen */
cl_square::cl_square()
{
    getData();
}
//! Initialisierung der virtuellen Methoden
//@{
//! (void type) getData
/*! der Wert für die Seitenlänge wird eingelesen */
void cl_square::getData()
{
    std::cout << "Type value for side of square:";
    std::cin >> m_side;
}
//! (float type) getData
/*! der Flächeninhalt des Kreises wird berechnet */
float cl_square::area()
{
    return m_side*m_side;
}
//@}
