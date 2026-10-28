//Write a C program that accepts a word from the user and counts how many times each character appears.


#include <stdio.h>
int main() 
{
    int c=0;
    char arr[50];
    printf("give string");
    scanf("%49s",arr);
    for(int i=0;arr[i]!='\0';i++)
        {
            c++;
        }
    for(int i=0;i<c;i++)
        {
            int n=0;
            int found = 0;
           for (int k = 0; k < i; k++)
           {
                   if (arr[k] == arr[i])
                   {
                         found = 1;
                         break;
                   }
           }
            if(found==1)
            {
                continue;
            }
            for(int j=0;j<c;j++)
                {
                    if(arr[i]==arr[j])
                    {
                        n++;
                    }
                }
             printf("the no of times %c is repeated is %d time \n",arr[i],n);
        }
    return 0;
}
