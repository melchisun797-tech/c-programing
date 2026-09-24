//Open student.txt in "r" mode.
//Check whether fp == NULL.
//If it failed, print "file could not be opened".
//Otherwise, read and display the student information.
//Close the file.


#include <stdio.h>

int main() 
{
    char name[50];
    int age;
    float cgpa;
    FILE *fp;
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
