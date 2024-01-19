#include <math.h>
#include <iostream>
using namespace std;

int main() {
  int x = 2;
  x = x + 1;
  y = cos(x);
  x = cos(x / y - 8) * 2;

  {
    x = x + 1;
    y = cos(x);
    x = cos(x / y - 8) * 2;
  }

  cout << x << end;
  cout << y << end;
  return 0;
}