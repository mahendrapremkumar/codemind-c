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
   int count=0;
   for(j=0;j<a;j++)
   {
       if(arr[j]%2==1 && arr[j+1]%2==0 && arr[j+2]%2==1)
       
           count++;
           
        
       
   }
   printf("%d",count);
  
   
   
       
    

    
}