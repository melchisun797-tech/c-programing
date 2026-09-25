//Square of the first number
//Cube of the first number
//Larger of the two numbers


#include <stdio.h>
#define cube(a) (a*a*a) 
#define square(b) (b*b) 
#define max(a,b) (a>b?a:b)
int main()
{
    int a,b;
    printf("tell me the nos");
    scanf("%d %d",&a,&b);
    printf("the square no is %d",square(b));
    printf("the cube no is %d",cube(a));
    printf("the max no is %d",max(a,b));
    return 0;
}
