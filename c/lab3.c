#include<stdio.h>
int main(){
    int num, rev=0 , right_digit; 
    printf("Enter your number:\n");
    scanf("%d",&num);
    while(num!=0){
        right_digit=num%10;
        rev=rev*10 + right_digit;
        num=num/10; 
    }
    printf("The reverse digit is %d",rev);

    


    

    



   




    return 0;
}