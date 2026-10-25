//Build a command-line calculator that accepts two numbers and an operator.


#include <stdio.h>
#include <stdlib.h>
int add(int a,int b)
{
    int squ1=a+b;
    return squ1;
}
int sub(int a,int b)
{
    int squ2=a-b;
    return squ2;
}
int mul(int a,int b)
{
    int squ3=a*b;
    return squ3;
}
int main(int argc,char *argv[])
{
    if(argc!=4)
    {
        printf("enter 3 arguments");
        return 1;
    }
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    char c = argv[3][0];
    int (*op)(int,int);
    switch(c)
        {
            case '+':
                {
                    op=add;
                    int sq1=op(a,b);
                    printf("%d\n",sq1);    
                    break;
                }
            case '-':
                {
                    op=sub;
                    int sq2=op(a,b);    
                    printf("%d\n",sq2);  
                    break;
                }
            case '*':
                {
                    op=mul;
                    int sq3=op(a,b);
                    printf("%d\n",sq3);  
                    break;
                }   
            default:
                {
                      printf("unsupported operator");
                      break;
                }
        }
    return 0; 
}
