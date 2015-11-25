#include "eineklasse.h"

eineKlasse::eineKlasse( int&& a, float&& b) //Konstruktoren (hat immer denselben Namen wie die Klasse
    : m_eineVariable(std::move(a)), m_nocheineVariable(std::move(b))
{

    // weitere Initialisierungen des Objekts

}

int eineKlasse::eineFunktion(int x)
{
  return x;
}
