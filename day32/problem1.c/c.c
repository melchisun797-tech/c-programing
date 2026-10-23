#include <stdio.h>
#include "calculator.h"
int main()
{
int a,b;
printf("enter 2 no");
scanf("%d%d",&a,&b);
int x = add(a,b);
int y = subtract(a,b);
int z = multiply(a,b);
printf("%d\n%d\n%d\n",x,y,z);
return 0;
}
