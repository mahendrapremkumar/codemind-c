#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int c=0,d=0;
    for(j=0 ;j<n;j++)
    {
        scanf("%d",&arr[j]);
        c=c+arr[j];
    }
    for(j=0;j<n;j++)
    {
        if(arr[j]<=(c/n))
        d++;
    }
    printf("%d",d);
}