//Take details of all 5 students.
//Print all 5 students.
//Find the student with the highest CGPA.
//Print that student's name and CGPA.


#include <stdio.h>
int main()
{ 
        int highest=0;
    struct student
    {
        char name[50];
        float cgpa;
        int age;
    };
        struct  student s[5];

    for(int i=0;i<5;i++)
{
    printf("enter the name\n");
    printf("enter the age\n");
    printf("enter the cgpa\n");       
    scanf("%s",s[i].name);
    scanf("%d",&s[i].age);
    scanf("%f",&s[i].cgpa);
}
        for(int i=0;i<5;i++)
            {
    printf("the name is %s\n",s[i].name);    
    printf("the age is %d\n",s[i].age);
    printf("the cgpa is %f\n",s[i].cgpa);
            }
           for(int i=0;i<5;i++)
               {
                   if(s[i].cgpa>s[highest].cgpa)
                   {
                       highest=i;
                   }
               }
     
        printf("the student with the highest cgpa's name is %s\n",s[highest].name);
     printf("the highest cgpa is %f\n",s[highest].cgpa);      
         

    return 0;
}
