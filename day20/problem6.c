//Write a program that:
//Opens student.txt in "w" mode.
//Writes:
//Your name
//Your age
//Your CGPA
//Closes the file.
//Opens the same file in "r" mode.
//Reads the three values.
//Prints them on the screen.
//Closes the file.


#include <stdio.h>

int main() 
{
    char name[50];
    int age;
    float cgpa;
    FILE *fp;
     fp=fopen("student.txt","w"); 
     if(fp==NULL)
     {
        printf("the file could not be opened");
        return 1; 
     }
     fprintf(fp,"melchisun\n");
     fprintf(fp,"18");
     fprintf(fp,"9.8");
     fclose(fp);
     fp=fopen("student.txt","r");
    if(fp==NULL)
    {
        printf("the file could not be opened");
        return 1; 
    }
    fscanf(fp,"%s",name);
    fscanf(fp,"%d",&age);
    fscanf(fp,"%f",&cgpa);
    printf("the name is %s\n",name);
    printf("the age is %d\n",age);
    printf("the cgpa is %f\n",cgpa);
    fclose(fp);
    return 0;
}
