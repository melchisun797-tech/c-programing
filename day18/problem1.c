//Create one student.
//Take the student's name, age and CGPA.
//Create a function called display().
//Pass the student structure to display().
//Print all three details inside display().


#include <stdio.h>
struct student
    {
        char name[50];
        int age;
        float cgpa;
    };
void display(struct student s)
{
    printf("the name of the student %s\n",s.name);
    printf("the age of the age %d\n",s.age);
    printf("the cgpa of the student %f\n",s.cgpa);
}
int main() 
{
    printf("enter your name cgpa age");
    struct student s1;
    scanf("%s",s1.name);
    scanf("%d",&s1.age);
    scanf("%f",&s1.cgpa);
    display(s1);
    return 0;
}
