/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char name[50];
    char section[20];
    float grade1, grade2, grade3, grade4;
    float average;
    
    printf("Enter your Complete Name: ");
    fgets(name, sizeof(name), stdin);
    
    printf("Enter your Section: ");
    fgets(section, sizeof(section), stdin);
    
    printf("\nEnter 1st Quarter Grade: ");
    scanf("%f", &grade1);
    
    printf("Enter 2nd Quarter Grade: ");
    scanf("%f", &grade2);
    
    printf("Enter 3rd Quarter Grade: ");
    scanf("%f", &grade3);
    
    printf("Enter 4th Quarter Grade: ");
    scanf("%f", &grade4);
    
    average = (grade1 + grade2 + grade3 + grade4) / 4;
    
    printf("\nStudent: %s", name);
    printf("Section: %s", section);
    printf("General Average: %.2f\n", average);
    
    if (average >= 90 && average <= 100) {
        printf("Remarks: Outstanding\n");
    }
    else if (average >= 85) {
        printf("Remarks: Very Satisfactory\n");
    }
    else if (average >=75) {
        printf("Remarks: Fair\n");
    }
    else{
        printf("Remarks: Failed\n");
    }
    

    return 0;
}
