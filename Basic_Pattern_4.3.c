#include<stdio.h>
int main()
{
    int a,i,j,k;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a;j++)
        {
            if(j%2==0)
            {
                k=0;
            }
            else
            {
                k=1;
            }
            printf("%d ",k);
        }
        printf("
");
    }
}