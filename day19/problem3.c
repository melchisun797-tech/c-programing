//Write a program using:
//sizeof(union student1)
//and:
//sizeof(struct student2)
//Print both sizes.



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
    printf("%zu\n",sizeof(struct student2));
    printf("%zu\n",sizeof(union student1));
    return 0;
}
