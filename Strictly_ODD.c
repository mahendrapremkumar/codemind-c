#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
     int c=0;
    for(j=0;j<n;j++)
    {
        if(arr[j]%2==1 && j%2==0)
        {
            c++;
        }
    }
    if(c>=1)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
    
}