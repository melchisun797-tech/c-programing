#include <stdio.h>
#include "student.h"
int main()
{
int a,b,c;
printf("enter 3 subject mark");
scanf("%d%d%",&a,&b,&c);
int x = total(a,b,c);
int y = average(x);
printf("%d\n%f\n",x,y);
return 0;
}



