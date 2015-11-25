#ifndef CL_CIRCLE_H
#define CL_CIRCLE_H
#include <cl_figures.h>


class cl_circle : public cl_figures
{
private:
    float m_radius;     /*!< float Radius des Kreises */
public:
    //! Construktor
    cl_circle();
    //! öffentliche Methoden
    //@{
    //! (void type) getData
    /*! Methode um die jeweiligen Daten einzulesen */
    void getData();
    //! (float type) getData
    /*! Methode um den jeweiligen Flächeninhalt zu berechnen */
    float area();
};

#endif // CL_CIRCLE_H
