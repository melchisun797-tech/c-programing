//Print:
//*
//**
//***
//****
//*****


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
