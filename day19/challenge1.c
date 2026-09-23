//Create an array of 3 students.
//Input their name, age, and CGPA.
//Display all 3 students.
//Find the student with the highest CGPA.
//Display that student's name and CGPA.


#include <stdio.h>
int highest=0;
struct student 
{
    char name[50];
    float cgpa;
    int age;
};
int main()
{
    struct student s[5];    
    for(int i=0;i<5;i++)
        {
             
             printf("enter age\n");
             scanf("%d",&s[i].age);
             printf("age is= %d\n",s[i].age);
             printf("enter cgpa\n");
             scanf("%f",&s[i].cgpa);  
             printf("cgpa is= %f\n",s[i].cgpa);
             printf("enter name\n");
             scanf("%s",s[i].name);  
             printf("name is= %s\n",s[i].name);
        }
    for(int i=0;i<5;i++)
        {
            if(s[highest].cgpa<s[i].cgpa)
            {
                highest=i;
            }
        }
    printf("name is= %s\n",s[highest].name);
    printf("cgpa is= %.2f\n",s[highest].cgpa);
    return 0;
}
