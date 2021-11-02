//**********************************************************************
// File:       main.cpp
// Author:     CS, Pacific University
// Date:       11/2/21
// Class:      CS 150-01
// Assignment: Points (More Functions)
// Purpose:    The user will enter two points. The program will 
//						 determine the the distance between the points, the points
//						 from left to right,and which point is closest to the 
//						 origin. 
// Hours:
//**********************************************************************
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void getPoint (string prompt, int &x, int &y);
void displayPoint (int x, int y);

double getDistance (int x1, int y1, int x2, int y2);

void orderLeftToRight (int &x1, int &y1, int &x2, int &y2);
void findClosestToOrigin (int x1, int y1, int x2, int y2,
	int &closestX, int &closestY);

/***********************************************************************
Function:     main

Description:  Performs some calculations on points as described in the
							program's purpose.

Parameters:   None

Returned:     Exit Status
***********************************************************************/
int main () {
	const int PRECISION_AMOUNT = 2;
	int x1, y1, x2, y2, closestX, closestY;

	cout << fixed << setprecision (PRECISION_AMOUNT);

	cout << "*********************" << endl;
	cout << "*       POINTS      *" << endl;
	cout << "*********************" << endl << endl << endl;

	// Add code to produce the output on the lab specification. Write and
	// test one function at a time.

	return EXIT_SUCCESS;
}

/***********************************************************************
Function:			getPoint

Description:	Read the point from the user

Parameters:		x - the x value of the point
							y - the y value of the point

Returned:			None
***********************************************************************/


/***********************************************************************
Function:			displayPoint

Description:	Display the point to the screen

Parameters:		x - the x value of the point
							y - the y value of the point

Returned:			None
***********************************************************************/


/***********************************************************************
Function:			getDistance

Description:	Calculate the distance between the points. Return distance.

Parameters:		x1 - the x value of the first point
							y1 - the y value of the first point
							x2 - the x value of the second point
							y2 - the y value of the second point

Returned:			the distance between the points
***********************************************************************/


/***********************************************************************
Function:			orderLeftToRight

Description:	Order the points from left to right using the x values.
							The left most point ends up in x1, y1, the rightmost point
							ends up in x2, y2

Parameters:		x1 - the x value of the first point
							y1 - the y value of the first point
							x2 - the x value of the second point
							y2 - the y value of the second point

Returned:			None
***********************************************************************/


/***********************************************************************
Function:			findClosestToOrigin

Description:	Determine which of two points is closer to (0, 0).
							Return the point via closestX, closestY

Parameters:		x1 - the x value of the first point
							y1 - the y value of the first point
							x2 - the x value of the second point
							y2 - the y value of the second point
							closestX - the x value of the point closest to the origin
							closestY - the y value of the point closest to the origin

Returned:			None
***********************************************************************/


/***********************************************************************
Function:			drawLine - Totally Optional!!!!!!!

Description:	Using Bresenham's algorithm, draw a line between two 
							specified points. The plot (x, y) function will need to be
							replaced by using couts at the proper place(s) in the
							function.

							Bresenham's Algorithm in pseudo-code from:
							https://en.wikipedia.org/wiki/Bresenham%27s_line_algorithm

							function line(x0, y0, x1, y1)
								real deltax := x1 - x0
								real deltay := y1 - y0

								// Assume deltax != 0 (line is not vertical),
								// note that this division needs to be done in a way
								// that preserves the fractional part
								real deltaerr := abs(deltay / deltax)

								real error := 0.0 // No error at start
								int y := y0
								for x from x0 to x1
									plot (x,y)
									error := error + deltaerr
									if error ≥ 0.5 then
										y := y + sign(deltay) * 1
										error := error - 1.0

Parameters:		x0 - the x value of the first point
							y0 - the y value of the first point
							x1 - the x value of the second point
							y1 - the y value of the second point

Returned:			None
***********************************************************************/