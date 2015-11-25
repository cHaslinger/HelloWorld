#include<iostream>
using namespace std;
int main()
{
    union mix_t {
      int l;
      struct {
        short hi;
        short lo;
        } s;
      char c[4];
    } mix;
mix_t;
}
