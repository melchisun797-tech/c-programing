//Problem 4
//Ask the user for two integers and print their:
//sum
//difference
//product
//division


#include <stdio.h>
int main() 
{
    int fno;
    int sno;
    printf("enter 2 no=\n");
    scanf("%d",&fno);
    scanf("%d",&sno);
    printf("the sum is %d\n",fno+sno);
    printf("the diff is %d\n",fno-sno);
    printf("the prod is %d\n",fno*sno);
    printf("the div is %f\n",(float)fno/sno);
    return 0;
}
