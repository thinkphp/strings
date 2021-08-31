/*
Description:
Secventa de cautat

Se citeste de la tastatura un numar natural cu cel mult 100 de cifre. Determinati
cea mai lunga secventa de cifre consecutive, pozitia de inceput a acesteia si
continutul. In caz ca exista mai multe secvente de aceeasi dimensiune maxima,
afisati-o pe prima din sir.

Input:
777123411177

Output:
Lungimea maxima: 4
Prima pozitie: 4
Subsirul: 1234
*/
#include <stdio.h>
#include <string.h>

typedef char Number[300];

int FindSequence(Number num, int *lMax) {

    int i, iCurr, iMax, n;

    n = strlen(num);

    iCurr = 0;

    iMax = 0;

    *lMax = 1;

    i = 0;

    while(i < n) {

          if( i - iCurr > *lMax) {

             *lMax = i - iCurr;

              iMax = iCurr;
          }

          iCurr = i;

          while( (num[i]+1) == num[i+1] && i < n - 1) i++;

          i++;
    }

    return iMax;
}

int main(int argc, char const *argv[]) {

  Number num;

  int lMax,

      iMax;

  gets( num );

  iMax = FindSequence( num, &lMax );

  printf("%d - %d\n", iMax, lMax);

  for(int i = iMax; i < iMax + lMax; ++i) printf("%c", num[ i ] );

  return 0;
}
