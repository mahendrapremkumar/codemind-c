#include<stdio.h>
int main()
{
    int n,i,a,count=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
        if(arr[i]==a)
        count++;
    }
    if(count>0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}