#include <QCoreApplication>
#include <iostream>

int main()
{

  std::cout << "Hello World! ";     // standard character out (print)
  const int n=10;
  const int& nn=n;
  //Ausgabe der Quadratzahlen

  for(int loop=1; loop<=n; ++loop)
  {
      std::cout << " Das Quadrat von " << loop << " ist: " << loop*loop << std::endl;
  }

  return 0;
}





