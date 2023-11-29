#include<stdio.h>
int main()
{
    int i,n,n1,m,k;
    scanf("%d%d",&n,&n1);
    for(i=n+1;i<n1;i++)
    {
        
            m=i*i;
            k=i*i*i; 
            printf("%d %d %d
",i,m,k);
            
    }
   
}