#include<stdio.h>
int main()
{
    int i,rows,j;
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("
");
    }
    return 0;
    
    
}