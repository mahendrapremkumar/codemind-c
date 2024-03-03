#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^
]s",str);
    int c=0;
    for(int i=0;str[i]!=NULL;i++)
    {
        if(str[i]==' ')
        {
            c++;
        }
    }
    c++;
    printf("%d",c);
}