/*### Day 37 – Student Management System

Question:

Write a C program using an array of structures to create a Student Management System.

Each student should have:

- Roll number
- Name
- Marks in 3 subjects
- Average marks

Your program must perform the following operations:

1. Read the number of students.
2. Get each student's name and roll number.
3. Read marks in three subjects for every student.
4. Calculate and store each student's average.
5. Display the student with the highest average.
6. Search for a student using their roll number.
7. Display the student's details, marks, and average if found.
8. Display "Student not found" if the roll number doesn't exist.

Conditions:

- Use `struct`.
- Use an array of structures.
- Use nested loops where required.
- Maximum 50 students.
- Each subject is out of 100 marks.*/

#include <stdio.h>
struct student
{
    int roll;
    char name[50];
    float marks[3];
    float avg;
};
int main()
{
    struct student s[50];
    int n, se;
    int highest = 0;
    int found = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    if (n < 1 || n > 50)
    {
        printf("Invalid number of students");
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter name of student %d: ", i + 1);
        scanf("%49s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);
    }

    for (int i = 0; i < n; i++)
    {
        float sum = 0;

        printf("\nEnter three marks for %s:\n", s[i].name);

        for (int j = 0; j < 3; j++)
        {
            scanf("%f", &s[i].marks[j]);
            sum = sum + s[i].marks[j];
        }

        s[i].avg = sum / 3.0f;

        printf("Average = %.2f\n", s[i].avg);
    }
    for (int i = 1; i < n; i++)
    {
        if (s[i].avg > s[highest].avg)
        {
            highest = i;
        }
    }

    printf("\nStudent with highest average:\n");
    printf("Name: %s\n", s[highest].name);
    printf("Roll: %d\n", s[highest].roll);
    printf("Average: %.2f\n", s[highest].avg);
    printf("\nEnter roll number to search: ");
    scanf("%d", &se);

    for (int i = 0; i < n; i++)
    {
        if (se == s[i].roll)
        {
            found = 1;

            printf("\nStudent found!\n");
            printf("Name: %s\n", s[i].name);
            printf("Roll: %d\n", s[i].roll);

            for (int j = 0; j < 3; j++)
            {
                printf("Mark %d: %.2f\n", j + 1, s[i].marks[j]);
            }

            printf("Average: %.2f\n", s[i].avg);
            break;
        }
    }

    if (found == 0)
    {
        printf("Student not found!\n");
    }

    return 0;
}
