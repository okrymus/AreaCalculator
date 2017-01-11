// Function Pototypes

// Pre condition:  NONE
// Post condition: Print a centered title for the program
void printTitle();         //   DONE

// Pre condition:  NONE
// Post condition: Return a letter: "n", "N", "y", or "Y"
//                 removes everything else from the cin
char getYorN();         //   DONE

// Pre condition:  radius >= 0
// Post condition: Return a double number which is the area of a circle with radious "radious"
double areaCalculate(double radius);        //   DONE

// Pre condition:  lenght >= 0 and width >= 0
// Post condition: Return a double number which is an area of regtangle with width "width" and length "lenght"
double areaCalculate(double lenght, double width);       //   DONE

// Pre condition:  side1 + side2 > side3, side2 + side3 > side1 and side1 + side3 > side2
//                 and are all possitive numbers
// Post condition: Return a double number which is an are of the triangle area with given sides
double areaCalculate(double side1, double side2, double side3);       //   DONE

// Pre condition:  NONE
// Post condition: Return a valid positive double
//                 it does NOT crashes for non-numeric input
//                 removes everything else from the cin
double getPosNum();        //   DONE

// Pre condition:  NONE
// Post condition: Return a valid double number
//                 it does not crashes for non-numeric input   
//                 removes everything else from the cin
double getNum();       //   DONE

// Pre condition:  NONE
// Post condition: gets three double numbers that can form sides of a legal triangle
//                 it does not crashes for non-numeric input
//                 removes everything else from the cin
void getTriangleSides(double &side1, double &side2, double &side3);       //   DONE
