#include "main.h"
/**
* main - Entry point
* Description: Print @c c_putchar.
* Return:0
*/

void print_alphabet_x10(void){
char c ;
int i ;
for (i = 0 ; i < 10 ; i++){
for (c = 'a' ; c <= 'z' ; c++){
putchar(c);}
putchar('\n');}
}
