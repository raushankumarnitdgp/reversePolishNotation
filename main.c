#include <stdio.h>
#include "stack.c"
#include "calc.c"
#define MAXOP 100 /* max size of operand or operator */
void calculate(char s[], int type, double op2);
/* reverse Polish calculator */
main()
{
    int type;
    double op2;
    char s[MAXOP];
    
    while ((type = getop(s)) != EOF) {
      calculate(s,type,op2);
    }
}
 
