#include <iostream>
using namespace std;

void ajouter(int *a){
  a+=1;
}

int main() {
  int b = 1;
  ajouter(&b);
  cout << b << endl;

  return 0;
};