#include<stdio.h>
int main(){
    int i, n , a=0 , b=1 ,c;
    printf("Enter the limit:");
    scanf("%d",&n);
    for(i=1; i<=n; i=i+1)
    {
        printf("%d",a);
        c=a+b;
        a=b;
        b=c;
    }





    return 0;
}