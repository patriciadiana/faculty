/**5. Prime factors Write a function that decomposes a number into prime factors, 
 * and prints out the result, in the form: 18=2*3^2. 
 * Warning, ^ does *not* denote exponentiation in C.
 * Hint: keep as helper the last prime factor tried, so you can continue with a larger (odd) number*/
#include<stdio.h>
void prime(unsigned n)
{
    int p=2;
    while(n!=1)
    {
        int contor=0;
        while(n%p==0)
        {
            contor++;
            n=n/p;
        }
        if(contor!=0)
        {
            if(contor==1) 
                printf("%d",p);
            else
                printf("%d^%d",p,contor);
            if(n!=1)
                printf("*");
        }
    p++;
    }
    printf("\n");
}
int main()
{
    prime(18);
    prime(12);
    return 0;
}