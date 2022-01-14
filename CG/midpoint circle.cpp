#include<stdio.h>
#include<graphics.h>
 
void drawcircle(int x0, int y0, int radius)
{
    int x = radius;
    int y = 0;
    int err = 0;
 
    while (x >= y)
    {
		putpixel(x0 + x, y0 + y,07);
		putpixel(x0 + y, y0 + x,07);
		putpixel(x0 - y, y0 + x,07);
		putpixel(x0 - x, y0 + y,07);
		putpixel(x0 - x, y0 - y,07);
		putpixel(x0 - y, y0 - x,07);
		putpixel(x0 + y, y0 - x,07);
		putpixel(x0 + x, y0 - y,07);
 
		if (err <= 0)
		{
    		y += 1;
    		err += 2*y + 1;
		}
 
		if (err > 0)
		{
    		x -= 1;
    		err -= 2*x + 1;
		}
    }
    getch();
}
 
int main()
{
	int gd = DETECT, gm;
	initgraph (&gd, &gm, (char*)"");
 	int r, x, y;
	printf("Enter radius of circle: ");
	scanf("%d", &r);
 
	printf("Enter co-ordinates of center(x and y): ");
	scanf("%d%d", &x, &y);
	drawcircle(x, y, r);
 
	return 0;
}
