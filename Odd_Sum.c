#include<stdio.h>
int main()

{
    int N,i,sum=0;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2!=0)
        
            sum=sum+arr[i];
        
    }
    printf("%d",sum);
}