#include "pototypes.h"
#include <iostream>
using namespace std;

// function def are done

void printTitle()               //  DONE
{
	cout
		<< endl
		<< "\t                  Lab on Overloading Functions                      " << endl
		<< "\t       Find the area of a rectangle, triangle, or circle            " << endl
		<< "\t                        By Lee. Panupong                            " << endl;
}

char getYorN()   ///   done
{
	char select;
	cin >> select;  cin.ignore(80, '\n');

	while (!(select == 'y' || select == 'n' || select == 'Y' || select == 'N'))
	{
		cout << "Please type Y or N. Try again :";
		cin >> select;  cin.ignore(80, '\n');
	}
	return select ;
}

double areaCalculate(double radius)              //  DONE
{
	const double PI = 3.14159;

	return PI * radius * radius;
}

double areaCalculate(double lenght, double width)              //  DONE
{
	return lenght*width;
}

double areaCalculate(double side1, double side2, double side3)              //  DONE
{
	double s = (side1 + side2 + side3) / 2.0;
	
	return sqrt(s*(s - side1)*(s - side2)*(s - side3));
}

void getTriangleSides(double &side1, double &side2, double &side3)              //  DONE
{
	cout << "\nGive me the lengths of the sides of a triangle." << endl;
	cout << "Side 1: ";   side1 = getPosNum();
	cout << "Side 2: ";   side2 = getPosNum();
	cout << "Side 3: ";   side3 = getPosNum();

	while (!(side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2))
	{
		cout << "\tThe sum of two sides of a triangle must be greater than the third side." << endl;
		cout << "Try again. Side 1: ";   side1 = getPosNum();
		cout << "Try again. Side 2: ";   side2 = getPosNum();
		cout << "Try again. Side 3: ";   side3 = getPosNum();
	}
}

double getPosNum()              //  DONE
{
	double number = getNum();

	while (number <= 0)
	{
		cout << "\t" << number << " is NOT an positive. Try again: ";
		number = getNum();
	}
	return number;
}

double getNum()              //  DONE
{
	double number;
	while (!(cin >> number))
	{
		cout << "\tNumbers only please. Try again: ";
		cin.clear();
		cin.ignore(80, '\n');
	}
	cin.ignore(80, '\n');
	return number;
}
