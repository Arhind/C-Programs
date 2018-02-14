#include <stdio.h>
int main()
{
    int i, N;
    int A[1000];
    scanf("%d", &N);
    for(i=0; i<=N; i++)
    scanf("%d", &A[i]);
    
    for( i=N; i>=1; i--)
    printf("%d\n", A[i]);
}
