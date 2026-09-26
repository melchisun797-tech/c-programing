//Now make your calculator handle something like:
//./program 10 % 3
//Since % isn't currently supported, print:
//Invalid operator


#include <stdio.h>
#include <stdlib.h>
int main( int argc,char *argv[])
{
    //program 10+20
    //program 10-20
    //program 10*20
    //program 10/20
    //progrqm 10%20
    if(argv[2][0]=='+')
    {
    printf("%d",(atoi(argv[1]))+(atoi(argv[3])));
    } 
    else if(argv[2][0]=='-')
    {
    printf("%d",(atoi(argv[1]))-(atoi(argv[3])));
    }
    else if(argv[2][0]=='*')
    {
    printf("%d",(atoi(argv[1]))*(atoi(argv[3])));
    }
    else if(argv[2][0]=='/')
    {
    printf("%d",(atoi(argv[1]))/(atoi(argv[3])));
    }
    else
    {
    printf("invalid");
    }
    return 0;
}
