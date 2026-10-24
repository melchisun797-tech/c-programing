#include <stdio.h>
#include "student.h"
int main()
{
    int x,y,z,c;
    printf("enter mark of three subject\n");
    scanf("%d%d%d",&x,&y,&z);
    do
    {
    printf("1.TOTAL\n");
    printf("2.AVERAGE\n");
    printf("3.PASS OR FAIL\n");
    printf("4.EXIT\n");
    printf("enter choice\n");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
            {
                int t=total(x,y,z);
                printf("total=%d\n",t);
                break;
            }
        case 2:
            {
                int t=total(x,y,z);
                float a=average(t);
                printf("average=%.2f\n",a);
                break;
            }
        case 3:
            {
                int r=checkpass(x,y,z);
                if(r==1)
                {
                    printf("PASS");
                }
                else
                {
                    printf("FAIL");
                }
                break;
            }
        case 4:
            {
                break;
            }
        default:
            {
                printf("invalid choice");
                break;
            }
    }  
    }
    while(c!=4);
    return 0;
}



