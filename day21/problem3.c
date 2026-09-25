//Create a macro called MAX that accepts two numbers and gives the larger number


#include <stdio.h>
#define max(a,b) (a>b?a:b) 
int main()
{
    int a,b;
    printf("tell me the nos");
    scanf("%d %d",&a,&b);
    printf("the bigger no is %d",max(a,b));
    return 0;
}
