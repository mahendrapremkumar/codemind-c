#include<stdio.h>
int main()
{
    int n,k,m,a;
    scanf("%d%d%d",&n,&k,&m);
    a=k*m;
    if(n%a==0)
     {
         printf("%d",n/a);
     }
     else 
     {
         printf("%d",(n/a)+1);
     }
    
}