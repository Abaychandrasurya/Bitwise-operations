#include<stdio.h>
int main()
{
    int i,n,count;
    printf("enter the value:");
    scanf("%d",&n);
     while(n>0)
     {
         if(n&1==1)
            count++;
         n=n>>1;
     }
     printf("set bits:%d",count);
}
