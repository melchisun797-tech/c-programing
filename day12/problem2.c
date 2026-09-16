//Write a function:
//void addFive(int *p)
//It should increase the original variable by 5.
//In main():
//a = 10
//Call the function using &a.


#include <stdio.h>

    void pointer(int *p)
    {
       *p=*p+5;
       printf("the changed value %d",*p) ;
    }
    int main() 
{
    int a;
    printf("enter a no");
    scanf("%d",&a);
    pointer(&a);
    return 0;    
}
