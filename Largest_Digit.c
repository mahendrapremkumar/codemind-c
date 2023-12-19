#include<stdio.h>
int main()
{
    int a,b,s=0;
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;  //b=9453%10=3  945%10=5  94%10=4 9/10=9
        a=a/10;  //a=9453/10=945  945/10=94 94/10=9
        if(s<b)
        {
            s=b;
        }
    }
    printf("%d",s);
}