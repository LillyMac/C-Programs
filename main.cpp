#include <iostream>
#include "math.h"

using namespace std;

//Prompt the user for a proposed array size.

//int  a[m];
//long  b[m];
//long  c[m];
//long  total_squares[m];

int i, j, k, l, q, counter = 0, triple_counter = 0;
int main()
{
    int m;
    std::cout << "Please enter the desired sample size:  "; //Maybe put in header file
    std::cin >> m;

    double *a = new double[m];
    double *b = new double[m];
    double *c = new double[m];
    double *total_squares = new double[m];

    for (int q = 0; q <= m; q++)
    {
        a[q] = 0;

        b[q] = 0;
        c[q] = 0;
        total_squares[q] = 0;
    }
 for(l = 1; l <= m; l++)
 {
  for(j = 1; j <= m; j++)
  {
    b[j] = j * j;

    for(k = 1; k <= m; k++)
     {
       a[k] = k * k;
      //
       //std::cout << a[k] << " + " << b[j] << " = " << a[k] + b[j] << std::endl;
       total_squares[counter] = a[k] + b[j];
       counter ++;

       c[l] = l * l;
       if(c[l] == a[k] + b[j])
       {
           triple_counter ++;
           std::cout << "The Pythagorean Triples are: " << k << " " << " " << j << " " << " " << l << std::endl;
       }

     }
  }
 }
  //std::cout << "Counter = "<< counter << std::endl;
  //std::cout << "Pythagorean Triple Counter = "<< triple_counter << std::endl;

  /*for(int x = 0; x <= counter; x++)
  {
      std::cout << "Total Squares = " << total_squares[x] << std::endl;
  }*/

delete[] a;
delete[] b;
delete[] c;
delete[] total_squares;

return 0;
}
