#include<stdio.h>
#include<string.h>
int main()
{
   char a[50];
   int i,n ;
   printf("Enter the string:");
   gets(a);
   n=strlen(a);
   for(i=0;i<n;i++)
   {
    if(a[i]==" ")
    printf("\n");
    else
    printf("%s",a[i]);
   }

   puts(a);
    

    return 0 ;
}

