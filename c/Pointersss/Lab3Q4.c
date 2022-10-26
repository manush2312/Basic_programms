#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct DOB{
    int day;
    char *month;
    int year;
}DOB;

typedef struct STUDENT_INFO
{
    int reg_no;
    char *name;
    char address;
}STUDENT_INFO;

typedef struct COLLEGE{
    char *college_name;
    char university_name[30];
}COLLEGE;

typedef struct STUDENT{
    DOB *d;
    STUDENT_INFO st;
    COLLEGE clg;

}STUDENT;

void read(STUDENT *stds, int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Enter the details of student %d :\n",(i+1));
        printf("Enter the name of the student:\n");
        scanf("%s",(stds+1)->st->name);
        
    }
}



int main()
{
    int n;
    printf("Enter the number of students:\n");
    scanf("%d",&n);

    STUDENT *stds = (STUDENT *)malloc(n*sizeof(STUDENT));

    read(stds,n);


    return 0;
}
