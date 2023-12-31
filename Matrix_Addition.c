#include<stdio.h>
int main()
{
    int n,o,i,j;
    scanf("%d%d",&n,&o);
    int arr[n][o];
    for(i=0;i<n;i++)
    {
        for(j=0;j<o;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    scanf("%d%d",&n,&o);
    int arr2[n][o];
    for(i=0;i<n;i++)
    {
        for(j=0;j<o;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<o;j++)
        {
            printf("%d ",arr[i][j]+arr2[i][j]);
        }
        printf("
");
    }
}