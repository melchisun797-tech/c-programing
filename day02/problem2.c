problem 2
Ask the user for:
length
width
Calculate and print:
Area
Perimeter



#include <stdio.h>
int main()
{
    float l;
    float w;
    printf("enter the length and widgth of a rectangle");
    scanf("%f",&l);
    scanf("%f",&w);
    printf("the perimeter of rectangle is %1.f\n",l*w);
    printf("the area of rectangle is %1.f\n",(l+w)*2);
    return 0;
}
