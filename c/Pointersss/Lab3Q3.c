#include<stdio.h>
#include<stdlib.h>

typedef struct DOB{
    int day;
    int month;
    int year;
}DOB;

typedef struct Add{
    int house_no;
    int zipcode;
    char state[25];
}Add;

typedef struct employees{
    char name[20];
    DOB d;
    Add addr;
}employees;

void read(employees *emp, int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Enter the name of the employee:\n");
        scanf("%s",(emp + i)->name);
        printf("Enter the date of Birth:\n");
        scanf("%d",&(emp+i)->d.day);
        printf("Enter the month of birth:\n");
        scanf("%d",&(emp+i)->d.month);
        printf("Enter the year of birth:\n");
        scanf("%d",&(emp+i)->d.year);
        printf("Enter the house address (house_number, zip_code, state):\n");
        scanf("%d %d %s",&(emp+i)->addr.house_no,&(emp+i)->addr.zipcode,(emp+i)->addr.state);


    }
}

void display(employees *emp, int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\nThe details of employee %d are:\n",(i+1));
        printf("Name: %s\n DOB: %d/%d/%d\n Address: %d %d %s", (emp+i)->name,(emp+i)->d.day,(emp+i)->d.month,(emp+i)->d.year,(emp+i)->addr.house_no,(emp+i)->addr.zipcode,(emp+i)->addr.state);
    }
}


int main()
{
    int n,i;
    printf("Enter the number of employees:\n");
    scanf("%d",&n);

    employees *emp = (employees *)malloc(n*sizeof(employees));

    read(emp,n);
    display(emp,n);







    return 0;
}