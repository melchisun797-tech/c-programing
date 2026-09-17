//Write a program that:
//Takes 5 integers into an array.
//Uses a pointer to access the array.
//Adds 10 to every element using pointer arithmetic.
//Prints the modified array.


 #include <stdio.h>
int main() 
{
    int a[5];
    printf("enter array elements");
    for(int i=0;i<=4;i++)
        { 
            scanf("%d",&a[i]);
            int *p=a;
            *(p+i)=*(p+i)+10;
            printf("the added array is%d\n",*(p+i));
        }
    return 0;
}
