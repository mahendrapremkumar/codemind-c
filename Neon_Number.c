#include<stdio.h>
int main()
{
    int sum=0,sq,num,k;
    scanf("%d",&num);
    sq=num*num;
    while(sq>0)
    {
        k=sq%10;
        sum=sum+k;
        sq=sq/10;
        
    }
    if(sum==num)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}