// The program calculate the area
// Overloading function 
// Programmer: Panupong Leenawarat
// Last modified 11/24/2015

#include <iostream>
#include "pototypes.h"
using namespace std;

int main()  // main is DONE
{
	char selection;
	double lenght, width, side1, side2, side3, radius;

	system("COLOR 3F");
	printTitle();
	
	cout << "\nDo you want to test the program? ";
	selection = getYorN();   // function name not descriptive getYorN

	while (selection == 'Y' || selection == 'y')
	{
		// Circle Area   done
		cout << "\nGive me the radius of a circle: ";
		radius = getPosNum();

		cout << "\tThe area of the circle is " << areaCalculate(radius) << endl;

		// Rectangle Area  done
		cout << "\nGive me the length a rectangle: ";
		lenght = getPosNum();
		cout << "Give me the width a rectangle: ";
		width = getPosNum();

		// Triangle Area  done
		cout << "\tThe area of the rectangle is " << areaCalculate(lenght, width) << endl;
		// Triangle Area
		getTriangleSides(side1, side2, side3);

		cout << "\tThe area of the triangle is " << areaCalculate(side1, side2, side3) << endl << endl;

	    cout << "\t******************************" << endl;

		cout << "\nDo you want to test the program? ";
		selection = getYorN();   // function name not descriptive getYorN
	}
	
	cout << "\nClosing the program" << endl;
	system("pause");
	return 0;
}