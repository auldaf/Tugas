/*
*Write a function draw_parallel that draws parallel lines and a function draw_
rectangle that uses draw_parallel and draw_base to draw a rectangle.
*/
#include <stdio.h>
int main()
{
	draw_base ();
	draw_parallel();
	
}
void			
draw_parallel()		/*menggambar garis parallel*/
{
printf("|_|\n");
}

void 
draw_base ()		/*menggambar garis dasar*/
{
	printf(" _\n");
}
