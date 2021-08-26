/*
Se considera urmatorul sir:
a, b, ba, bab, babba, babbabab, ...
Determinati care este cel de-al n-lea termen al sirului  n<=20.
Fisierul de intrare sir.in contine o singura linie pe care se afla numarul natural n.
Fisierul de iesire sir.out va contine o singura linie pe care se afla al
n-lea termen din sir.

Input: 4
Output: bab

(O.J.I. 2003, class a 7-a)
*/

#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[]) {

   char s1[100] = "a", //input
        s2[100]="b", s3[100], //input
        n;//output

   //cout<<"n=";
   //cin>>n;
   int a, b, c;
    n = 6;
    for(int i = 3; i <= n; ++i) {
          strcpy(s3,s2);
          strcat(s3,s1);
          strcpy(s1,s2);
          strcpy(s2,s3);
    }
    cout<<s3;
  return 0;
}
