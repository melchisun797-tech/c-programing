//The task is to print all 3 elements using only the pointer.


#include <stdio.h>
int main() 
{
    int a[3];
    printf("enter array elements");
    for(int i=0;i<=2;i++)
        {
            scanf("%d",&a[i]);
            int *p=a+i;
            printf("the pointer is %d\n",*p);
        }
    return 0;
}
