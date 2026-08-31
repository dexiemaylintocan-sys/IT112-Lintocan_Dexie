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
    int num1;
    int num2;
    
    printf("Enter your complete Name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter your Section: ");
    fgets(section, sizeof(section), stdin);
    
    printf("Enter first Number: ");
    scanf("%d",&num1);
    printf("Enter second Number: ");
    scanf("%d",&num2);
    
    int add = num1 + num2;
    int sub = num1 - num2;
    int mult = num1 * num2;
    float div = (float)num1 / num2;
    
    printf("\nStudent Calculator\n");
    printf("Student name: %s", name);
    printf("Student section: %s\n", section);
    
    printf("results:\n");
    printf("%d + %d = %d \n", num1, num2, add);
    printf("%d - %d = %d \n", num1, num2, sub);
    printf("%d * %d = %d \n", num1, num2, mult);
    printf("%d / %d = %.2f \n", num1, num2, div);
    
    
    

    return 0;
}