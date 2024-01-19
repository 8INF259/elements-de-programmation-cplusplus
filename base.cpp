#include <iostream>
#define TVA 18.6
using namespace std;

int main() {
  float HT, TTC;
  cout << "Veuillez entrer le prix H.H.T";
  cin >> HT;
  TTC = HT*(1+(TVA/100));
  cout << "Le prix T.T.C. est " << TTC;

  return 0;
} // fin du programme