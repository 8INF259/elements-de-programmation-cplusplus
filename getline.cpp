#include <iostream>
#include <string>
using namespace std;

int main () {
  string name;

  cout << "S'il vous plait entrez votre nom entier: ";
  getline (cin,name);
  cout << "Hello, " << name << "!\n";

  return 0;
}