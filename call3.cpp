// Call by pointer

void swap(int *x, int *y) {
   int temp;
   temp = *x; 
   *x = *y; 
   *y = temp; 
  
   return;
}

#include <iostream>
using namespace std;

void swap(int *x, int *y);

int main () {

   int a = 100;
   int b = 200;
 
   cout << "Before swap, value of a :" << a << endl;
   cout << "Before swap, value of b :" << b << endl;

   /* calling a function to swap the values.
      * &a indicates pointer to a ie. address of variable a and 
      * &b indicates pointer to b ie. address of variable b.
   */
   swap(&a, &b);

   cout << "After swap, value of a :" << a << endl;
   cout << "After swap, value of b :" << b << endl;
 
   return 0;
}
