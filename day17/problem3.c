//Write a program that:
//Defines the same student structure.
//Creates an array for 3 students.
//Uses a loop to input all 3 students.
//Uses another loop to print all 3 students.


#include <stdio.h>
int main()
{ 
        
    struct student
    {
        char name[50];
        float cgpa;
        int age;
    };
        struct  student s[3];

    for(int i=0;i<3;i++)
{
    printf("enter the name\n");
        printf("enter the age\n");
        printf("enter the cgpa\n");       
    scanf("%s",s[i].name);
    scanf("%d",&s[i].age);
    scanf("%f",&s[i].cgpa);
}
        for(int i=0;i<3;i++)
            {
    printf("the name is %s\n",s[i].name);    
    printf("the age is %d\n",s[i].age);
    printf("the cgpa is %f\n",s[i].cgpa);
            }

    return 0;
}
