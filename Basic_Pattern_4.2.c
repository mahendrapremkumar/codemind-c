#include<stdio.h>
int main()
{
    int a,i,j,k;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {    if(i%2==0)
            {
                k=0;
            }
            else
            {
                k=1;
            }
        for(j=1;j<=a;j++)
        {
            
            printf("%d ",k);
        }
        printf("
");
    }
}