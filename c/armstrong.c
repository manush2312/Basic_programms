#include<stdio.h>
int main(){
    int n ,r ,sum=0, temp;
    printf("Enter you 3 digit number:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum = sum + (r*r*r);
        n=n/10;

    }
    if(sum==temp)
    printf("The number %d is armstrong",sum);
    else
    printf("The number %d is not armstrong",sum);






    return 0;
}