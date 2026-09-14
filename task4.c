#include <stdio.h>

int main()
{
    char name[50];
    int rollNo;
    int age;
    float height;
    double gpa;
    char section;

    printf("Enter student name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &rollNo);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter height: ");
    scanf("%f", &height);

    printf("Enter GPA: ");
    scanf("%lf", &gpa);

    printf("Enter section: ");
    scanf(" %c", &section);

    printf("========================================\n");
    printf("STUDENT INFORMATION\n");
    printf("========================================\n");
    printf("Name\t: %s", name);
    printf("Roll No\t: %d\n", rollNo);
    printf("Age\t: %d\n", age);
    printf("Height\t: %.1f\n", height);
    printf("GPA\t: %.2f\n", gpa);
    printf("Section\t: %c\n", section);
    printf("========================================\n");

    return 0;
}