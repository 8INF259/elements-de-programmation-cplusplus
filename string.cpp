#include <iostream>
#include <string>
using namespace std;

int main() { 
  string nomDuClient = "Robert";
  string message = "Bonjour, M. " + nomDuClient; 
  message += '.'; 
  cout << message << endl;

  string str1 = "Coucou"; 
  string str2 = str1; 
  cout << str2 << endl;

  return 0;
}