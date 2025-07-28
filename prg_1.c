#include <stdio.h>
int globalvar = 1;// Global variable

void showStatic()
 {
              
    static int staticvar = 1;// Static variable
    printf("Static variable: %d\n", staticvar);
    staticvar++;
 }

int main() 
 {
   int localvar = 5; // Local variable
   register int regvar = 10;// Register variable
    printf("Local variable: %d\n", localvar);
    printf("Register variable: %d\n", regvar);
    printf("Global variable: %d\n", globalvar);

    // Show how static variable retains value
    showStatic(); // 1
    showStatic(); // 2
    showStatic(); // 3
    return 0;
}

