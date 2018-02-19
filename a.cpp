#include<iostream>
using namespace std;

 struct math
 {
  int real, add1, sub1, multi1 ;
  float imag, add2, sub2, multi2 ;
  };
  
 int main()
 {
   math math1; 

 cout << "enter real part of complex number\n" ;
 cin >> math1.real ;
 cin >> math1.real ;
 
 cout << "enter imaginary part of complex number\n" ;
 cin >> math1.imag ;
 cin >> math1.imag ;
 
  // ADD
  math1.add1 = math1.real + math1.real ;
  math1.add2 = math1.imag + math1.imag ; 

  //SUB
  math1.sub1 = math1.real - math1.real ;
  math1.sub2 = math1.imag - math1.imag ;
    
  // MULTIPLY
  math1.multi1 = math1.real * math1.real ;
  math1.multi2 = math1.imag * math1.imag ;
 
 cout << " addition = "<<math1.add1<<"+ i"<<math1.add2 ;
 cout << " subtraction = "<<math1.sub1<<"+ i"<<math1.sub2 ;
 cout << " multiplication = "<<math1.multi1<<"+ i"<<math1.multi2 ;
 cout << "\n";
 }
