#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,f,g,c=0,d,e=0;
    scanf("%d",&a);
    f=a;
    g=a;
    while(a!=0)
    {
        b=a%10;  //175 %10=5 17%10=7 7%10=0.7
        c++;    //1 2 3
        a=a/10;  //a=175 /10=17 17/10=7 7/10=0.7
        
    }
    while(f!=0)
    {
        b=f%10;
        f=f/10;
        d=pow(b,c);  //0^3
        e=e+d;  //0+0
        c--;   //
    }
    if(e==g)
    {
        printf("True");
    }
    else 
    {
        printf("False");
    }
}