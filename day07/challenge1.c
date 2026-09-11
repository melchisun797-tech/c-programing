//build a calculator using functions
//Create four functions:
//int add(int a, int b)
//int subtract(int a, int b)
//int multiply(int a, int b)
//float divide(int a, int b)


#include <stdio.h>
int add(int a,int b)
{
    int ad=a+b;
    return ad;
}
int sub(int a,int b)
{
    int s=a-b;
    return s;
}
int mul(int a,int b)
{
    int m=a*b;
    return m;
}
float div(float a,float b)
{
    float d=a/b;
    return d;
}
int main()
{
    int s,f;
    printf("enter 2 no");
    scanf("%d",&s); 
    scanf("%d",&f);
    int r=add(s,f);
    int j=sub(s,f);
    int k=mul(s,f);
    float l=div(s,f);
    printf("the add =%d\n",r);
    printf("the sub =%d\n",j);
    printf("the mul =%d\n",k);
    printf("the div =%.1f\n",l);
    return 0;
    
}
