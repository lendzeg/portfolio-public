/*
Nelson Rodriguez
2025-03-12
================

Activity: print text over several lines
=======================================

We just showed you how to print text to the screen and in particular how to display multiple lines of text. 
In this activity, the goal is to print a list of skills you have already mastered to the screen.

The list of skills is the following:

----------------------------
I already know how to:
- Print text to the screen.
- Start a new line.
- Fix errors.
----------------------------

Be careful: as a C developer, you have to respect certain rules. 
You need to print exactly what you see in the above box!
*/

#include <stdio.h>
int main(void){
    printf("I already know how to:\n");
    printf("- Print text to the screen.\n");
    printf("- Start a new line.\n");
    printf("- Fix errors.");
    return 0;
}