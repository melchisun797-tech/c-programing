//Write a program that:
//Takes 5 integers into an array.
//Creates a pointer pointing to the first element.
//Uses pointer arithmetic to calculate the sum of all 5 elements.
//Prints the sum.


 #include <stdio.h>
int main() 
{
    int a[5];
    int sum=0;
    int *p=a;
    printf("enter array elements");
    for(int i=0;i<=4;i++)
        {
            scanf("%d",&a[i]);
            sum=*(p+i)+sum; 
        }
    printf("the sum of array is%d\n",sum);
    return 0;
}
