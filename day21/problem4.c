//Create:
//a  macro
//It should calculate the cube of a number.


#include <stdio.h>
#define cube(a) (a*a*a) 
int main()
{
    int a;
    printf("tell me the no");
    scanf("%d",&a);
    printf("the bigger nois %d",cube(a));
    return 0;
}
