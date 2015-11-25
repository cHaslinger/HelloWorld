#include "cl_circle.h"
#include<iostream.h>
#include<math.h>
#include<iomanip.h>

//!Construktor
/*! bereits bei der Initialisierung eines Kreises sollen die Daten eingelesen werden */
cl_circle::cl_circle()
{
    getData();
}
//! Initialisierung der virtuellen Methoden
//@{
//! (void type) getData
/*! der Wert für den Radius wird eingelesen */
void cl_circle::getData()
{
    std::cout << "Type value for radius:";
    std::cin >> m_radius;
}
//! (float type) getData
/*! der Flächeninhalt des Kreises wird berechnet */
float cl_circle::area()
{
    return pi*m_radius*m_radius;
}
//@}
