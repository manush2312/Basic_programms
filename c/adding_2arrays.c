#include<stdio.h>
int main(){
    int a[10], b[10], c[10],n,m ;
    
    printf("Enter the size of a:");
    scanf("%d",&n);
    for(int j=0; j<n ; j++)
    {
        scanf("%d", &a[j]);
    }

    printf("Enter the size of b:");
    scanf("%d",&m);
    for(int j=0; j<m ; j++)
    {
        scanf("%d", &b[j]);
    }

    if(n==m){
        for(int j=0; j<m ; j++)
        c[j]=a[j]+b[j];
        
        printf("The sum of the given elements is:");

        for(int j=0; j<n; j++)
        {
            printf("%d", c[j]);
        }
    }
    else{
        printf("Sum cannot be printed");
    }






    return 0;
}