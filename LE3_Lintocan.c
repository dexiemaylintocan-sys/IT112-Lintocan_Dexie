/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char name[50];
    char section[20];
    float num1, num2;
    
    printf("Enter Complete Name: ");
    fgets(name, sizeof(name), stdin);
    
    printf("Enter Section: ");
    fgets(section, sizeof(section), stdin);
    
    printf("\nEnter first number: ");
    scanf("%f", &num1);
    
    printf("\nEnter second number: ");
    scanf("%f", &num2);
    
    printf("\nStudent Calculator\n");
    printf("Studend name: %s", name);
    printf("Section: %s", section);
    
    printf("Results:\n");
    printf("%.0f + %.0f = %.0f\n", num1, num2, num1 + num2);
    printf("%.0f - %.0f = %.0f\n", num1, num2, num1 - num2);
    printf("%.0f * %.0f = %.0f\n", num1, num2, num1 * num2);
    printf("%.0f / %.0f = %2f\n", num1, num2, num1 / num2);
    


    return 0;
}