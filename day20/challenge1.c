//Create a file called students.txt using "w" mode.
//Store 5 students, each with:
//Name
//Age
//CGPA
//Use a struct:
//struct student
//{
    //char name[50];
   // int age;
  //float cgpa;
//};
//Part 2 — Read from the file
//Close the file, then reopen it using "r" mode.
//Read all 5 students from the file and display them.
//Part 3 — Find the highest CGPA
//While reading the students, find the student with the highest CGPA and display:
//Student with highest CGPA:
//Name: ______
//CGPA: ______


#include <stdio.h>

int main() 
{
    int high=0;
    struct student
     {
        char name[50];
        int age;
        float cgpa;
     };
    FILE *fp;
     fp=fopen("student.txt","w");
     if(fp==NULL)
    {
        printf("the file could not be opened");
        return 1; 
    } 
    struct student s[5];
    for(int i=0;i<5;i++)
        {
            scanf("%f",&s[i].cgpa);
            scanf("%d",&s[i].age);
            scanf("%s",s[i].name);
     fprintf(fp,"%s\n",s[i].name);
     fprintf(fp,"%d\n",s[i].age);
     fprintf(fp,"%f\n",s[i].cgpa);
        }
     fclose(fp);
     fp=fopen("student.txt","r");
    if(fp==NULL)
    {
        printf("the file could not be opened");
        return 1; 
    } 
    for(int i=0;i<5;i++)
        {
    fscanf(fp,"%s",s[i].name);
    fscanf(fp,"%d",&s[i].age);
    fscanf(fp,"%f",&s[i].cgpa);
    printf("the name is %s\n",s[i].name);
    printf("the age is %d\n",s[i].age);
    printf("the cgpa is %f\n",s[i].cgpa);
        }
     for(int i=0;i<5;i++)
         {
    if(s[high].cgpa<s[i].cgpa)
    {
        high=i;
    }
         }
    printf("the highest cgpa is %f\n",s[high].cgpa);
    fclose(fp);
    return 0;
}
