//Write a program that:
//Takes 5 integers into an array.
//Creates a pointer to the first element.
//Uses *(p + i) to examine each element.
//Finds the largest number.
//Prints it.


 #include <stdio.h>
int main() 
{
    int a[5];
    int sum=0;
    
    printf("enter array elements");
    for(int i=0;i<=4;i++)
        { 
            scanf("%d",&a[i]);
        }
     int *p=a;
     int largest=*p;
     for(int i=0;i<=4;i++)
         {
                if(largest<*(p+i))
                {
                    largest=*(p+i);
                }        
         }
    printf("the largest of array is%d\n",largest);
    return 0;
}
