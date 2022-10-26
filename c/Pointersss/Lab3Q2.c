#include<stdio.h>
#include<stdlib.h>
#include<string.h>  
typedef struct student{
    char name[30];
    int rollno;
    float cgpa;
}student;

student read()
{
    student std;
    printf("Enter the name of the student:\n");
    scanf("%s",std.name);
    printf("Enter the rollno of student:\n");
    scanf("%d",&std.rollno);
    printf("Enter the CGPA of student:\n");
    scanf("%f",&std.cgpa);
    return std;

}

void display(student sts)
{
    printf("\nName of student is %s\n Roll no of student is %d\n CGPA is %f",sts.name, sts.rollno, sts.cgpa);
}

void sort(student *sts, int n )
{
    student temp;
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=1;j<n-1;j++)
        {
            if(sts[i].rollno>sts[j].rollno)
                temp = sts[i].rollno;
                sts[i].rollno = sts[j].rollno;
                sts[j].rollno = temp;
        }
    }
}

int main()
{
    int n,i;
    printf("Enter the number of students:\n");
    scanf("%d",&n);
    student *sts = (student*)malloc(n*sizeof(student));
    for(i=0;i<n;i++)
    {
        sts[i] = read();

    }

    for(i=0;i<n;i++){
    printf("\nDetails of student %d is:",i+1);
    display(sts[i]);
    }

    sort(sts,n);
    
    printf("Sorted array is:\n");
    for(i=0;i<n;i++)
    {
        display(sts[i]);
    }

}