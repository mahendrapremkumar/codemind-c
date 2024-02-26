#include<stdio.h>
int main()
{
    int i,a,b,n,r,c=0,k=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        n=i;
        c=0;
        k=0;
        while(n!=0)
        {
            r=n%10;
            if(r!=0)
            {
                if(i%r==0)
                {
                    c++;
                }
            }
            n=n/10;
            k++;
        }
        if(c==k)
        {
            printf("%d ",i);
        }
    }
}