//Make p point to add
//Print the result using p(10, 20)
//Then make p point to multiply
//Print the result using p(10, 20)


#include <stdio.h>
int sum(int n,int m)
{
    return n+m;
    
}   
int mul(int n,int m)
{
    return n*m;
}
int main()
{
    int n,m;
    printf("enter 2 no");
    scanf("%d%d",&n,&m);
    int (*p)(int,int)=sum;
    printf("the sum is %d",p(n,m));    
    p=mul;
    printf("the mul is %d",p(n,m));
    return 0;
}

