//Creates struct student
//Creates an array of 3 students
//Takes details of all 3 students
//Creates display() function
//Sends each student to display()
//Prints all 3 students using the function


#include <stdio.h>
struct student
{
    char name[50];
    int age;
    float cgpa;
};
void display(struct student s)
{
    printf("the student's name %s\n",s.name);
    printf("the student's age %d\n",s.age);
    printf("the student's cgpa %f\n",s.cgpa);
    
}
int main()
{
    struct student s[3] ;  
    printf("enter name of student and age and cgpa");
    for(int i=0;i<3;i++)
        {
             scanf("%s",s[i].name);
             scanf("%d",&s[i].age);
             scanf("%f",&s[i].cgpa);
        }
     for(int i=0;i<3;i++)
         {
             display(s[i]);
         }
}
