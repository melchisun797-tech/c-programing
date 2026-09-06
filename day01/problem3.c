//Problem 3
//Ask the user for:
//name/initial
//age
//height
//Then display them.


#include <stdio.h>
int main()
{
    char name[50];
    char intial;
    int age;
    float height;
    printf("give me your name intial age height=\n");
    scanf("%s",name);
    scanf(" %c",&intial);
    scanf("%d",&age);
    scanf("%f",&height);
    printf("your name is %s\n",name);
    printf("your intial is %c\n",intial);
    printf("your age is %d\n",age);
    printf("your height is %.1f\n",height);
    return 0;
}
