#include<stdio.h>
int main()
{
    int i,a,b=0,c=1,d;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        d=b+c;
        b=c;
        c=d;
      if(d==a)
      {
          break;
      }
    }
    if(d==a)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}