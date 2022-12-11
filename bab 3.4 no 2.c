/*
*Draw a structure chart for a program with three function subprograms that 
displays DOLL in a vertical column of block letters.
*/
#include <stdio.h>

int main()
{
d();	/*draw D*/
o();	/*draw O*/
l();	/*draw L*/
l();	/*draw L*/
}
void
 d()
 {
 	printf(" _ \n");
 	printf("|_)\n");
 	
 }
 void
 o()
 {
 printf(" _ \n");
 printf("|_|\n\n");
 
 }
 
 void 
 l()
 {

 	printf("|_\n\n");
 }
 
 void
 draw_doll(void)
 {
 	d();
 	o();
 	l();
 	l();
 }

