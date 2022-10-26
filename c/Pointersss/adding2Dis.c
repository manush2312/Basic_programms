#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct distance{
    int feet;
    int inch;
}Dist;

void read(Dist *ptr, int n)
{
    int i; 
    for(i=0;i<n;i++){
    printf("Enter the distance of element %d:\n",i+1);
    printf("Enter the distance in feet:\n");
    scanf("%d",&(ptr+i)->feet);
    printf("Enter the distence in inches:\n");
    scanf("%d",&(ptr+i)->inch);
    }
}

void display(Dist *ptr, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Distance of %d",i+1);
        printf("Feet:%d\n Inches:%d\n",(ptr+i)->feet,(ptr+i)->inch);
    }

}


int main()
{
    int n;
    printf("Enter the number of distances to be measured:\n");
    scanf("%d",&n);

    Dist *ptr = (Dist *)malloc(n*sizeof(Dist));

    read(ptr,n);
    display(ptr,n);

    return 0;
}