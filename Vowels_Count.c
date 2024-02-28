#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int c=0,i;
    scanf("%[^
]s",str);
    for( i=0;i<strlen(str);i++)
    
    {
        if(str[i]=='a'|| str[i]=='e'|| str[i]=='u'||str[i]=='o'||str[i]=='i')
        {
            c++;
        }
    }
    printf("%d",c);
}