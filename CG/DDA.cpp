// C program for DDA line generation
#include<stdio.h>
#include<graphics.h>
#include<math.h>

//Function for finding absolute value
int abs (int n)
{
	return ( (n>0) ? n : ( n * (-1)));
}

//DDA Function for line generation
void drawline(int X0, int Y0, int X1, int Y1)
{
	// calculate dx & dy
	int dx = X1 - X0;
	int dy = Y1 - Y0;

	// calculate steps required for generating pixels
	int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

	// calculate increment in x & y for each steps
	float Xinc = dx / (float) steps;
	float Yinc = dy / (float) steps;

	// Put pixel for each step
	float X = X0;
	float Y = Y0;
	for (int i = 0; i <= steps; i++)
	{
		putpixel (round(X),round(Y),WHITE); // put pixel at (X,Y)
		X += Xinc;		 // increment in x at each step
		Y += Yinc;		 // increment in y at each step
		delay(10);		 // for visualization of line-generation step by step
	}
	getch();
}

int main()
{
	int gd = DETECT, gm;
	initgraph (&gd, &gm, (char*)"");
	int x0, y0, x1, y1;
	printf("Enter co-ordinates of first point: ");  
    scanf("%d%d", &x0, &y0);  
    printf("Enter co-ordinates of second point: ");  
    scanf("%d%d", &x1, &y1);  
    drawline(x0, y0, x1, y1);
	return 0;
}

