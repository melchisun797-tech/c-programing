//Write a function:
//The function should swap the values of two variables.


#include <stdio.h>
    void pointer(int *p,int *q)
    {
       int tem=*p;
       *p=*q;
       *q=tem;
       printf("the changed value1=%d\n",*p) ;
       printf("the changed value2=%d\n",*q) ;
    }
    int main() 
{
    int a,b;
    printf("enter a no");
    scanf("%d",&a);
    scanf("%d",&b);
    pointer(&a,&b);
    return 0;    
}
