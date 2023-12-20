#include<stdio.h>
int main(){
    int a,i,k,j;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(i%2==0)
        {
            k=1;
        }
        else
        {
            k=0;
        }
        for(j=1;j<=a;j++)
        {
            printf("%d ",k);
        }
        printf("
");
    }
}