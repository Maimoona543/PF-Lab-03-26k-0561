#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];
    int rollNo;
    char section;
    char sampleChar;
    float value;

    printf("Enter student name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("Enter roll number: ");
    scanf("%d", &rollNo);

    printf("Enter section: ");
    scanf(" %c", &section);

    printf("Enter a sample character: ");
    scanf(" %c", &sampleChar);

    printf("Enter a floating-point value: ");
    scanf("%f", &value);

    printf("\n=============================================\n");
    printf("PROGRAMMING FUNDAMENTALS\n");
    printf("=============================================\n");
    printf("Name\t: %s\n", name);
    printf("Roll No\t: %d\n", rollNo);
    printf("Section\t: %c\n", section);
    printf("\nC Topics:\n");
    printf("1. Variables\n");
    printf("2. Data Types\n");
    printf("3. Input/Output\n");
    printf("4. Format Specifiers\n");
    printf("5. Escape Sequences\n");
    printf("\nSample Character: '%c'\n", sampleChar);
    puts("Sample Question: \"What is C?\"");
    printf("\nFloating Value:\n");
    printf("Default : %f\n", value);
    printf("2-digit : %.2f\n", value);
    printf("4-digit : %.4f\n", value);
    printf("=============================================\n");

    return 0;
}