#include<stdio.h>
int main()
{
    int a,i,j;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=a-1;j>=0;j--)
    {
        if(arr[j]%2==0)
        {
            printf("%d",j);
            break;
        }
    }
}