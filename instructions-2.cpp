#include <math.h>
#include <iostream>
using namespace std;

int main() {

  int x = 1;
  
  { /* Début du bloc */
    int z = 0; /* Variable locale au bloc.*/
    x = z + 2;
    z = sin(x);
  } /* Fin du bloc */
  
  z = 0; /* Erreur, z est déclarée dans le bloc. */

}GIT