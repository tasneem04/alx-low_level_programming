#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void) {
char ch;

for(ch = 'a' ; ch <= 'z' ; ch++) 
putchar(ch);

for(ch = 'A' ; ch <= 'Z' ; ch++)
putchar(ch);
putchar('\n');
   
   
return(0);
}
