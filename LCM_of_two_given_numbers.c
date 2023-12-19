#include<stdio.h>
int main()
{
    int i,a,b,c;
    scanf("%d%d",&a,&b); //12 24
    for(i=1;i<=b;i++)    //i=1;i<=24;i++
    {
         c=a*i;          //c=12*1=12;
                         
         if(c%b==0)      //12%24==0 
         break;
    }
    if(c%b==0)
    {
        printf("%d",c);
    }
}