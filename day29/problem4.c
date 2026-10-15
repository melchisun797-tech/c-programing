//Find the frequency of each element


#include <stdio.h>

int frequency(int arr[], int n, int x)
{
    int freq = 0;

    for (int j = 0; j < n; j++)
    {
        if (arr[j] == x)
        {
            freq++;
        }
    }

    return freq;
}

int main()
{
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int a = 0;

        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                a = 1;
                break;
            }
        }

        if (a == 0)
        {
            int z = frequency(arr, n, arr[i]);
            printf("%d appears %d times\n", arr[i], z);
        }
    }

    return 0;
}
