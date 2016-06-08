#include<stdio.h>
int main()
{
    int n=2, count=0;                 
    int i, m=100;
    printf("prime numbers are : ");
    while(n<m)
    {
        for(i=2; i<n; i++)
        {
        if(n%i==0)
        goto t;                            
        }
    printf("\t%d ", n);
    count++;
   t: n++;                                  
    }
    printf("\n\nNumber of prime numbers are %d",count);
    return 0;
}
