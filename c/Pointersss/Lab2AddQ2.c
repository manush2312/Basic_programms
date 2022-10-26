#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Palindrome(char *str)

{   int flag = 0;
    for(int i=0;i<strlen(str);i++)
    {
        if(*(str+i)!=*(str+(strlen(str))-i-1));
        flag=0;
        break;
    }
    if(flag==0)
        printf("Its not a palindrome.");
    else 
        printf("Its a palindrome.");
    
} 

int main()
{
    char str[50];
   
    gets(str);
    puts(str);
    Palindrome(str);


    return 0;
}