//Print:
//*
//**
//***
//****
//*****


#include <stdio.h>
int main()
{
    char c='*';
    for(int i=1;i<=5;i++)
        {
          for(int j=1;j<=i;j++)
              {
                  printf("%c",c);  
              }
            printf("\n");
        }
     return 0;
}
