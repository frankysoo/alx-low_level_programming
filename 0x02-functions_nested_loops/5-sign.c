#include "main.h"
/**
* print_sign - Print the sign of a number
* @n: type int integer, can be negative or positive
* Description: print +, 0, or - depending on number, along with return
* Return: 1 if +, 0 if 0, and -1 if -
*/
int print_sign(int n){
int a ;
if (n > 0){
a = 1 ;
putchar('+')

}
else if (n == 0){
a = 0 ;
putchar('0')
}
else {
a = -1 ;
putchar('-')
}
return a ;
}
