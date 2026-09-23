//Create one variable for each.
//Store 20 in age.
//Store 8.5 in cgpa.
//Print both age and CGPA for the structure.
//Print both age and CGPA for the union.


#include <stdio.h>
union student1
{
    float cgpa;
    int age;
};
struct student2
{
    float cgpa;
    int age;
};
int main()
{
    union student1 s1;
    struct student2 s2;
    printf("enter age\n");
    scanf("%d",&s1.age);
    printf("age is= %d\n",s1.age);
    printf("enter cgpa\n");
    scanf("%f",&s1.cgpa);
    printf("cgpa is= %f\n",s1.cgpa);
    printf("enter age\n");
    scanf("%d",&s2.age);
    printf("age is= %d\n",s2.age);
    printf("enter cgpa\n");
    scanf("%f",&s2.cgpa);
    printf("cgpa is= %f\n",s2.cgpa);    
    return 0;
}
