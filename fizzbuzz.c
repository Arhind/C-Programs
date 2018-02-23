 #include<stdio.h>
 #include<time.h>
 
 void main(){

int i;
clock_t t1,t2;
double d1, d2, d;

t1= clock();
 for( i=1; i<31; i++)
 {
        if( i%3==0)
         printf("Fizz\n"); 

        if( i%5==0)
         printf("Buzz\n"); 
            
        if( i%3==0 && i%5==0 )
         printf("FizzBuzz\n"); 

        if( i%3 != 0 && i%5 != 0)
         printf("%d\n",i);
}
t2=clock();

d1= t1;
d2= t2;
d= d2-d1;
 printf("avg time taken t1 and t2 is %f\n", d);
}
