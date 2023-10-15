#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==1)
    {
        printf("weird");
    }
    else if(n%2==0 && n>2 && n<5)
    {
        printf("not weird");
    }
    else if(n%2==0 && n<20 && n>6)
    {
        printf("weird");
    }
    else 
    {
        printf("not weird");
    }
}