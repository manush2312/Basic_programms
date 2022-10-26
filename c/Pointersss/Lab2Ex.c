#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n , i;
    char *sports[10];
    char str[100];

    printf("Enter number of sports:\n");
    scanf("%d",&n);

    printf("\nEnter the sports:\n");
    for(i=0;i<n;i++)
    {
        scanf("%s",str[i]);
        sports[i]=(char*)malloc(strlen(str)+1*sizeof(char));
        
        strcpy(*sports[i],str);  
    }

    for(i-0;i<n;i++)
    {
        printf("%s\n",sports[i]);
    }
    for (i = 0; i < n; i++){
free(sports[i]);}




    return 0;
}