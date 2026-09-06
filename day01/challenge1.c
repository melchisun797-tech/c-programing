Challenge 1
Write a C program that asks the user for:
Name
Age
Marks in Subject 1
Marks in Subject 2
Then display:
Total marks
Average marks


#include <stdio.h>
int main() 
{
    float fsb;
    float ssb;
    printf("enter 2 subjects mark =\n");
    scanf("%f",&fsb);
    scanf("%f",&ssb);
    printf("the sum of sub is %.1f\n",fsb+ssb);
    printf("the average of sub is %.1f\n",(fsb+ssb)/2);
    return 0;
}
