#ifndef CL_FIGURES_H
#define CL_FIGURES_H
#include <iostream>

class cl_figures
{
protected:
    const float pi=3.14156; /*!< const float pi */

public:
    //! Konstruktor
    cl_figures();
    //! virtuelle Methoden
    /*! sind von jeder Kindsklasse aus verwendbar */
    //@{
    //! (virtual void type) getData
    /*! Methode um die jeweiligen Daten einzulesen */
    virtual void getData() const=0;
    //! (virtual float type) area
    /*! Methode um den jeweiligen Flächeninhalt zu berechnen*/
    virtual float area() const=0;
    virtual void showArea()
    {
        std::cout << "Area = "<< area() << std::endl;
    }
    //@}
};

#endif // CL_FIGURES_H
