//Write a program that takes one string and counts:
//Number of vowels
// Number of consonants


#include <stdio.h>
int main() 
{
    char c[50];
    int a=0;
    int v=0;
    int c1=0;
    printf("enter a string");
    scanf("%s",c);
    char *p=c;
    int i=0;
    for(i=0;*(p+i)!='\0';i++)
        {
            a++;
        }
    for(i=0;i<a;i++) 
        {
            if(*(p+i)=='a'||*(p+i)=='e'||*(p+i)=='i'||*(p+i)=='o'||*(p+i)=='u')           
            {
                  v++;
            }
            else
            {
                c1++;
            }
        }
        printf("no of vowels in string=%d\n",v);
        printf("no of consonants string=%d\n",c1);
}

