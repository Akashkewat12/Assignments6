#include<stdio.h>

int main()
{
    int count=0,num;
    printf("Enter a num");
    scanf("%d",&num);
    while(num!=0)
    {
        num=num/10;
        count++;
    }
      printf("numer of digit is %d",count);
    return 0;
}
