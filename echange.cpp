#include <iostream>
using namespace std;

int main() {
  void echange(int &, int &);

  int n = 10, p = 20;

  cout << "avant l'appel : " << n << " " << p << endl;
  
  echange(n, p); // noter l'absence de l'opérateur &
  cout << "aprés l'appel : " << n << " " << p << endl;
  return 0;
}

void echange(int &a, int &b) {
  int c;
  cout << "début‚ change : " << a << " " << b << endl;
  c = a;
  a = b;
  b = c;
  cout << "fin‚ change : " << a << " " << b << endl;
  return;
}