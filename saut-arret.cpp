#include <iostream>
using namespace std;

int main() {
  int n = 1;
  while (n <= 10) {
    if (n == 1) {
      cout << "Ooops, division par 0";
      n++;
      continue;
    }
    double a = 1 / (n - 1);
    cout << a;
    n++;
  }

  n = 1;
  while (n <= 10) {
    if (n == 1) {
      cout << "ooops : division par 0";
      break;
    }
    double a = 1 / (n - 1);
    cout << a;
    n++;
  }

  return 0;
}