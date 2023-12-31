#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c=0,s,i;
    scanf("%f%f",&a,&b);
    for(i=a;i<=b;i++)
    {
       s=sqrt(i);
       c=c+s;
    }
    printf("%.2f",c);
}