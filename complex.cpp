// Complex number using structure in C++

#include<iostream>
using namespace std;

struct complex{
                float real, imag;
} s;

main(void)
{
        complex s1, s2, sum, diff ;
        
   cout << "Enter real and imaginary parts of complex number\n";
   cin >> s1.real >> s1.imag;
   cin >> s2.real >> s2.imag;
   
   //ADDITION
   sum.real = s1.real + s2.real;
   sum.imag = s1.imag + s2.imag;
   
     cout << "sum of complex number is "<<sum.real<< "+" <<sum.imag<<"i\n";
     
     //SUBTRACTION
   diff.real = s1.real - s2.real;
   diff.imag = s1.imag - s2.imag;
   
     cout << "Difference of complex number is "<<diff.real<< "+" <<diff.imag<<"i\n";
     
}
