//Create int a = 10
//Call the function using &a
//Print a
//Expected output
//a = 50


#include <stdio.h>

    int pointer(int *p)
    {
        *p=50;
        return *p;
    }
    int main() 
{
    int a=10;
    int n=pointer(&a);
    printf("the changed value %d",n);
    return 0;    
}
