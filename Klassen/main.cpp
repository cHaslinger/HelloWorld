#include <QCoreApplication>

int main(int argc, char *argv[])
{
int a=1;
float b=2;
eineKlasse C(std::move(a),std::move(b));
cout << a;
}
