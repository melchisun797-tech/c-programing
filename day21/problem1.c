//Write a C program that:
//Creates a macro:
//#define PI 3.14
//Takes the radius from the user.
//Calculates the area of a circle.
//Prints the area.


#include <stdio.h>
#define PI 3.14
int main()
{
    float area;
    int r;
    printf("tell me the radius");
    scanf("%d",&r);
    area=PI*r*r;
    printf("the area is %f",area);
    return 0;
}
