#include<stdio.h>
int main()
{
    int i,n,count;
    printf("enter the value:");
    scanf("%d",&n);
     while(n>0)
     {
         n=n&n-1;
            count++;
     }
     printf("set bits:%d",count);
}
