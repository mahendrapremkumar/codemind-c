#include<stdio.h>
int main()
{
    int i,a,b=0,c=1,d;
    scanf("%d",&a);
    printf("%d %d ",b,c);
    for(i=1;i<=a-2;i++)
    {
        
        d=b+c;
        b=c;
        c=d;
        printf("%d ",d);
    }
    
    
}