//Create a program that:
//Opens student.txt using "r".
//Reads the name, age, and CGPA from the file.
//Prints them on the screen.
//Closes the file.


#include <stdio.h>

int main() 
{
    char name[50];
    int age;
    float cgpa;
    FILE *fp;
    fp=fopen("student.txt","r");
    fscanf(fp,"%s",name);
    fscanf(fp,"%d",&age);
    fscanf(fp,"%f",&cgpa);
    printf("the name is %s\n",name);
    printf("the age is %d\n",age);
    printf("the cgpa is %f\n",cgpa);
    fclose(fp);
    return 0;
}
