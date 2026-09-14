#include <stdio.h>
#include <string.h>

int main()
{
    char name[50], city[50], university[50], department[50];

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("Enter city: ");
    fgets(city, sizeof(city), stdin);
    city[strcspn(city, "\n")] = '\0';

    printf("Enter university: ");
    fgets(university, sizeof(university), stdin);
    university[strcspn(university, "\n")] = '\0';

    printf("Enter department: ");
    fgets(department, sizeof(department), stdin);
    department[strcspn(department, "\n")] = '\0';

    printf("\n========================================\n");
    puts("STUDENT PROFILE");
    printf("========================================\n");
    printf("Name\t\t: %s\n", name);
    printf("City\t\t: %s\n", city);
    printf("University\t: %s\n", university);
    printf("Department\t: %s\n", department);
    printf("========================================\n");

    return 0;
}