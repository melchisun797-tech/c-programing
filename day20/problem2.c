//Write these three pieces of information into student.txt:
//Your name
//Your age
//Your CGPA


#include <stdio.h>

int main() 
{
    FILE *fp;
    fp=fopen("student.txt","w");
    fprintf(fp,"hello melchisun\n");
    fprintf(fp,"18\n");
    fprintf(fp,"9.8\n");
    fclose(fp);
    return 0;
}
