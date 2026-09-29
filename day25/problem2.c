//Write a program that:
//Creates an integer array of 5 elements.
//Takes 5 numbers from the user.
//Creates a function:
//int largest(int a[], int n)
//The function finds and returns the largest element.
//Print the largest number in main().


#include <stdio.h>
int cv(char n[],int j)
{
    int c=0;
    for(int i=0;i<j;i++)
        {
    if(n[i]=='a'||n[i]=='e'||n[i]=='i'||n[i]=='o'||n[i]=='u')   
    {
        c++;
    }
        }
    return c;
}

int main()
{
    int j;
    printf("enter no of elements");
    scanf("%d",&j);
    char n[j];
    printf("enter elements a string");
    
    scanf("%s",n);

    int l=cv(n,j);
    printf("the no of vowels%d",l);
}
