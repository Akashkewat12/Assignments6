//prime num or not prime.
#include<stdio.h>
int main()
{
    int i,f=0,n;
    printf("Enter A number\n:");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
         {
          f=1;
            break;
         }
    }

    if(f==0)
        printf("prime");
    else
        printf("not prime");
    return 0;
}
