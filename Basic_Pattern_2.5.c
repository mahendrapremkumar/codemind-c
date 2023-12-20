#include<stdio.h>
int main()
{
    int a,i,j;
    scanf("%d",&a);
    for(i=a;i>=1;i--)
    {
        for(j=i;j<=a;j++)
        {
            printf("%c ",i+64);
        }
        printf("
");
    }
}