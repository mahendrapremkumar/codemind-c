#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    
    scanf("%s",str1);
    scanf("%s",str2);
    if(strcmp(str2,str1)==0)
    {
        printf("Strings are Equal");
    }
    else
    {
        printf("Strings are not Equal");
    }
}