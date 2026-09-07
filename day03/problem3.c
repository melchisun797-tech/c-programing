//Write a program that:
//Takes a person's age as input.
//Checks whether they are eligible to vote.
//Assume the voting age is 18.
//Print either:
//Eligible to vote
//Not eligible to vote


#include <stdio.h>
int main() 
{
    int age;
    printf("enter your age");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("Eligible to vote");
    }
    else
    {
        printf(" Not Eligible to vote");    
    }
    return 0;
}
