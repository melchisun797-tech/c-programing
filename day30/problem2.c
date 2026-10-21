//Your new program should:
//1. Open mark.txt in read mode.
//2. Check whether the file opened successfully.
//3. Read the student's name and marks using fscanf().
//4. Display the name and marks.
//5. Close the file.


#include<stdio.h>
int main()
{
    FILE *fp;
    char c[50];
    int m;
    fp=fopen("mark.txt","r");
    if(fp==NULL)
    {
        printf("file not open");
        return 1;
    }
    fscanf(fp,"%49s",c);
    fscanf(fp,"%d",&m);
    printf("%s\n",c);
    printf("%d\n",m);
    fclose(fp);
    return 0;
}
