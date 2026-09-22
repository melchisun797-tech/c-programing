//Create:

//struct student
//{
  //  char name[50];
   // int age;
    //float cgpa;
//};

//Then:

//Create an array of 5 students.
//Input all 5 students.
//Create a function:
//void display(struct student *s)
//Use the function to display all 5 students.
//Create another function to find the student with the highest CGPA.


#include <stdio.h>
int h=0;
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
    struct student s[5]; 
    for(int i=0;i<5;i++)
        {
             scanf("%s",s[i].name);
             scanf("%d",&s[i].age);
             scanf("%f",&s[i].cgpa);
            display(&s[i]);
        }
                
                 highest(s);

}
void highest(struct student s[5])
{
 for(int i=0;i<5;i++)
     {
    if(s[h].cgpa<s[i].cgpa)
    {
        h=i;
    }
     }
    printf("the student name with highest cgpa%s\n",s[h].name);
    printf("the highest cgpa is %.2f\n", s[h].cgpa);
}
