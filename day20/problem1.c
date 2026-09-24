//Write a program that:
//Creates a file called student.txt
//Opens it in "w" mode
//Writes your name into the file
//Closes the file


#include <stdio.h>

int main() 
{
    FILE *fp;
    fp=fopen("student.txt","w");
    fprintf(fp,"hello melchisun");
    fclose(fp);
    return 0;
}
