#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],m,n,p,q,i,j;
    printf("Enter the dimensions of a:");
    scanf("%d %d",&m,&n);
    printf("Enter the dimensions of b:");
    scanf("%d %d",&p,&q);

    if(n!=p)
    {
        printf("This is not valid");
        exit(0);
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            c[i][j]=0;
            for(int k=0;k<q; k++)
            c[i][j]= c[i][j]+a[i][k]*b[k][j];
        }
    }
    printf("The product matrix is:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d", c[i][j]);
        }
        printf("\n");
    }
    





    return 0;
}