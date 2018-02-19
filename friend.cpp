#include<iostream>
using namespace std;

class Area{
		private:
			 int l, b;
			 
		public:
			void getlen( int length )
			{
					l=length;
			}
			void getbre( int breadth )
			{
					b=breadth;
			}
			
			friend int react( Area );
};
	
int react( Area A )
{	 
    return A.l*A.b;
     }
     
int main()
 {
  	Area A;
  	int area;
  	A.getlen(10);
  	A.getbre(5);
  	area = react(A);
  	cout<<"Area of rectangle is : "<<area<<endl;
 }
