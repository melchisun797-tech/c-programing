#include <stdio.h>
#include "student.h"
int main()
{
int a,b,c;
printf("enter 3 subject mark");
scanf("%d%d%d",&a,&b,&c);
int x = total(a,b,c);
float y = average(x);
printf("%d\n%.2f\n",x,y);
return 0;
}



