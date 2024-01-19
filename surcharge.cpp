#include <iostream>
#include <string>
using namespace std;

int moyenne(int a, int b){
  return (a+b)/2;
}

double moyenne(double a, double b){
  return (a+b)/2.0 + 1;
}

int mult(int x){
  return x*x;
}

int mult(int x, int y){
  int z=1;
  for (int i=0; i<y; i++) 
    z*=x;

  return z;
}

int main() { 
  int value1 = moyenne(10, 30);
  double value2 = moyenne(10.0, 30.0);

  cout << value1 << endl;
  cout << value2 << endl;

  int mult1 = mult(3);
  int mult2 = mult(3,3);

  cout << mult1 << endl;
  cout << mult2 << endl;

  return 0;
}