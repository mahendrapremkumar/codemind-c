#include<stdio.h>
int main()
{
    int a=0,b=0,i,j,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=0;j<n;j++)
    {
        if(arr[j]%2==0)
        {
            a=a+arr[j];
        }
        else
        {
            b=b+arr[j];
        }
    
    }
    if(a>b)
    {
        printf("%d",a-b);
    }
    else
    {
        printf("%d",b-a);
    }
}