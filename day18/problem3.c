//Create one student and a function display() that:
//Receives a pointer to the structure
//Prints the student's name
//Prints the age
//Prints the CGPA


#include <stdio.h>
struct student
{
    char name[50];
    int age;
    float cgpa;
};
void display(struct student *s)
{
    printf("the student's name %s\n",s->name);
    printf("the student's age %d\n",s->age);
    printf("the student's cgpa %f\n",s->cgpa);
    
}
int main()
{
    struct student s; 
             scanf("%s",s.name);
             scanf("%d",&s.age);
             scanf("%f",&s.cgpa);
     
             display(&s);
         
}
