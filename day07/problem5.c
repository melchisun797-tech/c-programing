//Factorial using a function
//Create:
//int factorial(int n)
//The function should:
//Receive a number.
//Calculate its factorial using a loop.
//Return the factorial.
//main() should print the returned result.


#include <stdio.h>
int fa=1;
int factorial(int n)
{
            
            for(int i=1;i<=n;i++)
               {
                    fa=i*fa;   
               }
            return fa;
}
int main()
    {
        printf("enter a no");
        int s;
        scanf("%d",&s);
        
        int r=factorial(s);        
        printf("the factorial of %d is %d",s,r);
        return 0;
    }

