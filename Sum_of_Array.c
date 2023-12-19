#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int i, arr[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    int sum=0;
    for(i=0;i<N;i++)
    {
        sum=sum+arr[i];
    }
    printf("%d",sum);
}