#ifndef CL_BALL_H
#define CL_BALL_H
#include "cl_figures.h"
#include <vector>

class cl_ball : public cl_figures
{
public:
    //@{
    //! Default Construtor
    cl_ball();
    //! Parameter Constructor (Kreis)
    /*! Kreis wird initialisiert durch Mittelpunkt und Raduis
     * @param[in] posX (float) Position auf x-Achse
     * @param[in] posY (float) Position auf y-Achse
     * @param[in] posZ /float) Position auf z-Achse */
    cl_ball(float x, float y, float z, float r);
    //@}
    //@{
    //! (void) setRadius
    /*! Zuweisung des Wertes R für den Radius
     * @param[in] R (float) Radius */
    void setRadius(float R);
    //! (float) getRadius
    /*! @param[out] m_radius Radius
     *  @returns m_radius */
    float getRadius() const;
    //@}
    //@{
    //! (bool) isIn
    /*! überprüft ob sich ein Punkt a in dem Kreis befindet
     * @return true oder false */
    bool isInBall(std::vector<float> a) const;
    //@}


    //! @param[in] m_radius (float) Radius des Kreises bzw. der Kugel
    float m_radius;


};

#endif // CL_BALL_H
