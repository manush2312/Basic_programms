#include<stdio.h>
int main(){
    int a,b,i=2,flag;
    printf("Enter your limits:");
    scanf("%d %d",&a ,&b);
    printf("The seires of prime numbers are:");
    while(a<b)
    {
        // i=2;
        flag = 0;
        while(i<a)
        {
            if((a%i)==0)
            {flag =1;
                break;
            }
            i=i+1;
        }
        if(flag==0 || i!=1){
            printf("%d\n",a);
            a++;
            i=2;
        }
    }






    return 0;
}