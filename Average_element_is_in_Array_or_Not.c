#include<stdio.h>
int main()
{
    int a,i,sum=0,avg,ans;
    
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
        avg=sum/a;
    }
    for(i=0;i<a;i++)
    {
       if(arr[i]==avg)
       {
           ans=1;
           break;
       }
    }
       if(ans==1)
      {
        printf("True");
      }
       else
      {
        printf("False");
      }
    
}