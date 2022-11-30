// wap print sum n natural cubes number.
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter a number-: \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       sum=sum+(i*i*i);
    }
    printf(" sum of n square natural number is =%d",sum);
    return 0;
}
