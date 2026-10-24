#include <stdio.h>
#include "student.h"

int total(int a,int b,int c)
{
     int t=a+b+c;
     return t;
}
float average(int t)
{
    float a=t/3.0f;
    return a;
}
int checkpass(int a,int b,int c)
{
    if(a>=40&&b>=40&&c>=40)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


