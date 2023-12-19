#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x%3==0 && x%5==0 && x%7==0)
    {
        printf("PlingPlangPlong");
    }
    else if(x%3==0 && x%5==0)
    {
        printf("PlingPlang");
    }
    else if(x%5==0 && x%7==0)
    {
        printf("PlangPlong");
    }
    else if(x%3==0)
    {
        printf("Pling");
    }
    else if(x%5==0)
    {
        printf("Plang");
    }
    else if(x%7==0)
    {
        printf("Plong");
    }
    else
    {
        printf("%d",x);
    }
}