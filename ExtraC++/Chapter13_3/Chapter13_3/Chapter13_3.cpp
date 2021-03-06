//Shannon Smith
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	rectangleType myRectangle = rectangleType(1, 1);
	rectangleType myRectangle1 = rectangleType(1, 2);
	boxType myBox = boxType(2,2,2);
	boxType newBox = boxType();

	cout << "Rectangles: " << endl;
	cout << myRectangle << endl;
	cout << "Perimeter: " << myRectangle.perimeter() << " units" << endl;
	cout << "Area: " << myRectangle.area() << " square units" << endl << endl;

	cout << "------------" << endl;

	cout << myRectangle1 << endl;
	cout << "Perimeter: " << myRectangle1.perimeter() << " units" << endl;
	cout << "Area: " << myRectangle1.area() << " square units" << endl << endl;


	cout << "------------" << endl;



	double nL, nW, nH;
	cout << "Length: " << endl;
	cin >> nL;
	cout << "Width: " << endl;
	cin >> nW;
	cout << "Height: " << endl;
	cin >> nH;
	cout << endl;

	newBox.setDimension(nL, nW, nH);

	cout << myBox << endl;
	cout << "Surface Area: " << myBox.area() << " square units" << endl;
	cout << "Volume: " << myBox.volume() << " cubic units" << endl;

	cout << endl << "------------" << endl;

	cout << newBox << endl;
	cout << "Surface Area: " << newBox.area() << " square units" << endl;
	cout << "Volume: " << newBox.volume() << " cubic units" << endl;

	cout << endl;
}