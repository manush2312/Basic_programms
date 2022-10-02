#include<stdio.h>
int main(){
    int sum=0, a[20],i,n ; 
    printf("Enter the size os array:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
     for(i=0;i<n;i++)
    {
        printf("%d", a[i]);
        printf ("\n");
    }
    
    for (i=0;i<n;i++)
    {
        
        sum+= a[i];
        
    }
    int avg=0;
    avg+= sum/n;
    printf ("avg is %d", avg);
    
    




    return 0;
}