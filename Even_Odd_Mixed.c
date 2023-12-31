#include<stdio.h>
int main()
{
    int a,b,c=0,d=0,f=0,i;
    scanf("%d",&a);
    while(a>0)
    {
        b=a%10;
        f++;
        if(b%2==0)
        {
            c++;
        }
        else
        {
            d++;
        }
        a=a/10;
    }
    if(f==c)
    {
        printf("Even");
    }
    else if (f==d)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}