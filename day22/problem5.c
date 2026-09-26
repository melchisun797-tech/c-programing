//Now let's make a small calculator.


#include <stdio.h>
#include <stdlib.h>
int main( int argc,char *argv[])
{
    //program 10+20
    if(argv[2][0]=='+')
    {
    printf("%d",(atoi(argv[1]))+(atoi(argv[3])));
    } 
    return 0;
}
