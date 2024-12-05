#include<stdio.h>
int main()
{
    int i,n,pos;
    printf("enter the value:");
    scanf("%d",&n);

    n=n^(n&n-1);
    pos=0;
    while(n)
     {
        n=n>>1;
        pos++;
     }
     printf("position of set bits:%d",pos);
}
