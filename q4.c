// wap print sum n natural square number.
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter a number-: \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       sum=sum+(i*i);
    }
    printf(" sum of n square natural number is =%d",sum);
    return 0;
}
