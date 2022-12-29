#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, i, j, primes = 0,c;
    scanf("%d%d", &a, &b);
    for(i=a; i<=b; i++)
    {
       c = 1;
        for(j=2; j<=sqrt(i); j++)
        {
            if(i%j==0)
            {
               c = 0;
                break;
            }
        }
        if(c && i!=1)
        {
            primes++;
        }
    }
    printf("%d", primes);
}