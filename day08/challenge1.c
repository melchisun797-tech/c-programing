//Array Analyzer
//Takes 5 integers into an array.
//Calculates the sum.
//Calculates the average.
//Finds the largest number.
//Finds the smallest number.
//Prints all four results.


#include <stdio.h>

int main()
{
    int arr[5];
    int sum = 0;
    int largest;
    int smallest;
    float average;

    printf("Enter 5 integers:\n");

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    smallest = arr[0];

    for(int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];

        if(arr[i] > largest)
        {
            largest = arr[i];
        }

        if(arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    average = (float)sum / 5;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);
    printf("Largest = %d\n", largest);
    printf("Smallest = %d\n", smallest);

    return 0;
}
