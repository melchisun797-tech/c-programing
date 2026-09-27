//Ask the user for two numbers.
//Call calculate(add, a, b) and print the result.
//Call calculate(multiply, a, b) and print the result.


#include <stdio.h>
int sum(int n,int m)
{
    return n+m;
}  
int mul(int n,int m)
{
    return n*m;
}  
void calculate(int (*p)(int,int),int n,int m)
{
    printf("%d",p(n,m));
}
int main()
{
    int n,m;
    printf("enter 2 no");
    scanf("%d%d",&n,&m);
    calculate(sum,n,m);
    calculate(mul,n,m);
    return 0;
}

