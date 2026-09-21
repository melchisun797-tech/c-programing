//Create a Student structure containing:
//name
//age
//cgpa
//Then create 3 student variables.
//Your program should:
//Take the details of all 3 students.
//Print all 3 students' details.


#include <stdio.h>
int main()
{ 
        printf("enter the name\n");
        printf("enter the age\n");
        printf("enter the cgpa\n");
    struct student
    {
        char name[50];
        float cgpa;
        int age;
    };
    struct  student s1;
    struct  student s2;
    struct  student s3;
    scanf("%s",s1.name);
    scanf("%d",&s1.age);
    scanf("%f",&s1.cgpa);
    scanf("%s",s2.name);
    scanf("%d",&s2.age);
    scanf("%f",&s2.cgpa);
    scanf("%s",s3.name);
    scanf("%d",&s3.age);
    scanf("%f",&s3.cgpa);
    printf("the name is %s\n",s1.name);    
    printf("the age is %d\n",s1.age);
    printf("the cgpa is %f\n",s1.cgpa);    
    printf("the name is %s\n",s2.name);    
    printf("the age is %d\n",s2.age);
    printf("the cgpa is %f\n",s2.cgpa);
    printf("the name is %s\n",s3.name);    
    printf("the age is %d\n",s3.age);
    printf("the cgpa is %f\n",s3.cgpa);
    return 0;
}
