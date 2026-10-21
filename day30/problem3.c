//Program should be:
//Open mark.txt in append mode.
//Check fp == NULL.
//Read the new student's name and marks.
//Write the name and marks on separate lines.
//Close the file.
//Print a success message only if the data was saved successfully.


#include<stdio.h>
int main()
{
    FILE *fp;
    char c[50];
    int m;
    fp=fopen("mark.txt","a");
    if(fp==NULL)
    {
        printf("file not open");
        return 1;
    }
    scanf("%s",c);
    scanf("%d",&m);
    fprintf(fp,"%s\n",c);
    fprintf(fp,"%d\n",m);
    fclose(fp);
    return 0;
}
