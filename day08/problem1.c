//Create an array containing:
//10 20 30 40 50
//Then use a for loop to print all five elements.
//Expected output:
//10
//20
//30
//40
//50

#include <stdio.h>
int main() 
{
    int arr[50]={10,20,30,40,50};
    for(int i=0;i<=4;i++)
        {
            printf("%d\n",arr[i]);      
        }
    return 0;
}
