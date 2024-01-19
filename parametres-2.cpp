#include <iostream>
using namespace std;

int ajouter (int a=10) {
  a+=1;
  return a;
}

int main() {
  int b = 1;
  b = ajouter(b);
  cout << b << endl;

  return 0;
}