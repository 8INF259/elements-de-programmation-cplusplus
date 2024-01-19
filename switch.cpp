#include <iostream>
#include <string>
using namespace std;

int main() { 
  string option;

  cout << "S'il vous plait entrez votre option (1, 2, ou 3): ";
  getline (cin,option);
  int valeur = stoi(option);
  
  switch (valeur){
    case 1: 
      cout << "Vous avez choisi 1" << endl; 
      break;
    case 2: 
      cout << "Vous avez choisi 2" << endl;
      break;
    case 3: 
      cout << "Vous avez choisi 3"  << endl;
      break;
    default: 
      cout << "Votre option n'est pas valide";
  }

  return 0;
}