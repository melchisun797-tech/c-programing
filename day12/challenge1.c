//Write a function:
//The function must:
//Add 5 to a
//Add 10 to b
//Swap the resulting values


#include <stdio.h>
    void pointer(int *p,int *q)
    {
       *p=*p+5;
       *q=*q+10;
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
