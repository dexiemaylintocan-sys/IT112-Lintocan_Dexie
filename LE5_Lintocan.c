/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num;
    int sum = 0;
    
    printf("Enter positive number to ADD(Zero or negative number to STOP)\n\n");
    
    while(1) {
        printf("Enter a Number: ");
        scanf("%d", &num);
        
        if (num <= 0) {
            break;
        }
        
         sum += num;
    }
    
    printf("Total sum is: %d\n", sum);
    
    return 0;
}