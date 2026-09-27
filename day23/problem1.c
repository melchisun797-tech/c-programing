//A function called add
//It takes two integers
//It returns their sum
//Create a function pointer called ptr
//Use ptr to call add
//Print the result


#include <stdio.h>
int sum(int n,int m)
{
    return n+m;
    
}
int main()
{
    int n,m;
    printf("enter 2 no");
    scanf("%d%d",&n,&m);
    int (*p)(int,int)=sum;
    printf("the sum is %d",p(n,m));
    return 0;
}

