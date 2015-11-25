#ifndef CL_TRIANGLE_H
#define CL_TRIANGLE_H
#include <cl_figures.h>

class cl_triangle : public cl_figures
{
private:
    float m_a, m_b, m_c; /*!< float m_a, m_b und m_c, Seiten des Dreiecks */
public:
    //! Default Construktor
    cl_triangle();
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

#endif // CL_TRIANGLE_H
