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
    for(j=0;j<n;j++)
    {
        scanf("%d",&arr[j]);
        if(arr[j]%2==1)
        {
            printf("%d ",arr[j]);
        }
    }
    for(j=0;j<n;j++)
    {
        if(arr[j]%2==0)
        {
            printf("%d ",arr[j]);
        }
    }
}