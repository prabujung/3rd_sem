#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void draw(int x,int y,int xc,int yc)
{
	putpixel(xc+x,yc+y,07);
	putpixel(xc+x,yc-y,07);
	putpixel(xc-x,yc+y,07);
	putpixel(xc-x,yc-y,07);
}


void drawcircle(int x0, int y0, int a, int b)
{
    float x = 0;
    float y = b;
    float p = (b*b)-(a*a*b)+(a*a*0.25);
 
    while ( (2*b*b*x) < (2*y*a*a) )
    {
		draw(x,y,x0,y0);
		delay(50);
		if (p < 0)
		{
    		p = p + 2*b*b*x + b*b;
		}
 
		else
		{
    		y --;
    		p = p + 2*x*b*b + b*b -2*y*a*a;
		}
		x ++;
    }
    
    p=(b*b)*((float)(x+0.5))*((float)(x+0.5))+((a*a)*(y-1)*(y-1))-(a*a*b*b);
    //p = ((x+0.5)*(x+0.5)*b*b)+((y-1)*(y-1)*a*a)) - (a*a*b*b);
    
    while (y>= 0)
    {
		if (p <= 0)
		{
    		p = p + 2*b*b*x - 2*a*a*y + a *a;
    		x++;
		}
 
		else
		{
    		p = p + a*a - 2*y*a*a;
		}
		y --;
		draw(x,y,x0,y0);
		delay(50);
    }
    getch();
}


int main()
{
	int gd = DETECT, gm;
	initgraph (&gd, &gm, (char*)"");
 	int x, y, a, b;
	
 	
	printf("Enter co-ordinates of center(x and y): ");
	scanf("%d%d", &x, &y);
	
	printf("Enter value of a and b: ");
	scanf("%d%d", &a, &b);
	
	drawcircle(x, y, a, b);
 
	return 0;
}
