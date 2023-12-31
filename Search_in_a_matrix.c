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
    int a,c=0;
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
        for(j=0;j<o;j++)
        {
            if(a==arr[i][j])
            {
                c++;
            }
        }
    }
    if(c==1)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}