//Create a union variable s
//Store an age of 20
//Print the age
//Store a CGPA of 8.5
//Print the CGPA


#include <stdio.h>
union student
{
    float cgpa;
    int age;
};
int main()
{
    union student s;
    printf("enter age\n");
    scanf("%d",&s.age);
    printf("age is= %d\n",s.age);
    printf("enter cgpa\n");
    scanf("%f",&s.cgpa);
    printf("cgpa is= %f\n",s.cgpa);
    return 0;
}
