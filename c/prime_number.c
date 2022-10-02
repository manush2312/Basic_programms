#include<stdio.h>
int main(){
    int i=2, prime=1, num;
    printf("Enter your number:");
    scanf("%d",&num);
    while(i<num){
        if((num%i)==0){
            prime = 0;
            break;
        }
        i=i+1;
    }
    
    if(prime==1)
    printf("The number is prime number\n");
    else
    printf("The number is not a prime number\n");





    return 0;
}