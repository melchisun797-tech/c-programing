//Ask the user for a number n.
//Calculate:
//1 + 2 + 3 + ... + n


#include <stdio.h>
int main() 
{
    int n;
    printf("give me a no");
    scanf("%d",&n);
    int sum=0;
    int i=1;
    while(n>0)
        {
            sum=sum+i;
            i++;
            n--;
        }
    printf("sum= %d\n",sum);
    return 0;
}
