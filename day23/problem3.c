//add() → returns a + b
//calculate() → receives a function pointer and two integers
//main() → calls calculate(add, 10, 20)
//Output should be:


#include <stdio.h>
int sum(int n,int m)
{
    return n+m;
}   
void calculate(int (*p)(int,int),int n,int m)
{
    printf("the sum is %d",p(n,m));
}
int main()
{
    int n,m;
    printf("enter 2 no");
    scanf("%d%d",&n,&m);
    calculate(sum,n,m);
    return 0;
}

