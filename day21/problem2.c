//Take an integer from the user.
//Calculate its square using your macro.
//Print the result.


#include <stdio.h>
#define square(x) (x*x)
int main()
{
    int x;
    printf("tell me the radius");
    scanf("%d",&x);
    printf("the area is %d",square(x));
    return 0;
}
