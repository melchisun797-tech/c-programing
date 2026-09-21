//Create a structure called Student containing:
//name → character array
//age → integer
//cgpa → float
//Then:
//Create one student variable.
//Take all three values from the user.
//Print all three values.


#include <stdio.h>
int main()
{ 
        printf("enter the name\n");
        printf("enter the age\n");
        printf("enter the cgpa\n");
    struct student
    {
        char name[50];
        float cgpa;
        int age;
    };
    struct  student s1;
    scanf("%s",s1.name);
    scanf("%d",&s1.age);
    scanf("%f",&s1.cgpa);
    printf("the name is %s\n",s1.name);
    
    printf("the age is %d\n",s1.age);

    printf("the cgpa is %f\n",s1.cgpa);
    return 0;
}
