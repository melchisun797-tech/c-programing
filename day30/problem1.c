//Write a program that:
//1. Accepts a student's name and marks from the keyboard.
//2. Opens a file named marks.txt in write mode.
//3. Checks whether the file opened successfully.
//4. Saves the name and marks into the file using fprintf().
//5. Closes the file.
//6. Prints Data saved successfully. on the screen.


#include<stdio.h>
int main()
{
    FILE *fp;
    char c[50];
    int marks;
    fp=fopen("mark.txt","w");
    if(fp==NULL)
    {
        printf("file not open");
        return 1;
    }
    printf("enter name and mark");
    if (scanf("%49s %d",c,&marks)==2)
    {
    fprintf(fp,"%s\n",c);
    fprintf(fp,"%d\n",marks);
    printf("data saved successfully");
    }
    fclose(fp);
    return 0;
}
