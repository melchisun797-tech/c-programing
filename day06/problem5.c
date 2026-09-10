//Write a program that prints multiplication tables from 1 to 5, each from 1 to 10.
//Expected structure:
//1 x 1 = 1
//1 x 2 = 2
//...
//1 x 10 = 10

//2 x 1 = 2
//2 x 2 = 4
//...
//2 x 10 = 20

//...

//5 x 10 = 50


#include <stdio.h>
int main()
{
    int prod;
    for(int i=1;i<=5;i++)
        {
          for(int j=1;j<=10;j++)
              {
                  prod=i*j;
                  printf("%d x %d = %d\n",i,j,prod);  
              }
            printf("\n");
            
        }
     return 0;
}
