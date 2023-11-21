#include<stdio.h>
int main()
{
    int a,i,b;
    scanf("%d%d%d",&a,&i,&b);
    for(i;i<=b;i++)
    {
        printf("%d x %d = %d
",a,i,i*a);
    }
}