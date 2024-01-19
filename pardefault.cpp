#include <iostream>
using namespace std;

int main (){
  int n = 10, p = 20 ;
  void fonct ( int, int = 12 ) ; // prototype avec une valeur par défaut

  fonct ( n, p ) ; // appel normal
  fonct ( n ) ; // appel avec un seul argument
  return 0 ;
};

void fonct ( int a, int b ) {
  cout << "premier argument : " << a << endl ;
  cout << "deuxième argument : " << b << endl ;
}