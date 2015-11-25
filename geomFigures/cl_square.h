#ifndef CL_SQUARE_H
#define CL_SQUARE_H
#include <cl_figures.h>

class cl_square : public cl_figures
{
private:
    float m_side;   /*!< float m_side Seite des Quadrats */

public:
    //! Default Construktor
    cl_square();
    //! öffentliche Methoden
    //@{
    //! (void type) getData
    /*! Methode um die jeweiligen Daten einzulesen */
    void getData();
    //! (float type) getData
    /*! Methode um die jeweiligen Daten einzulesen */
    float area();
    //@}
};

#endif // CL_SQUARE_H
