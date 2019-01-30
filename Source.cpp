


/***********************************************
* Name: Nevin O'Konski
* Email: okonsk89@students.rowan.edu
***********************************************
* Purpose:
*  This program calculates area of circle
***********************************************/

#include <iostream>

using namespace std; 

const  float PI = 3.14159;

int main()
{

	float miles, kilometers, meters, centimeters, milimeters;

	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " Converts Miles to Kilometers, meters, cenimeters and milimeters" << endl;
	cout << " ******************************************\n\n";

	//Get user input
	cout << "Please input distance in miles: ";
	cin >> miles;

	//Convert Miles to kilometerts, meters, centimeters and milimeters
	kilometers = miles * 1.6;
	meters = kilometers * 1000;
	centimeters = meters * 100;
	milimeters = meters * 1000;

	//Display kilometers
	cout << " The distance in kilometers is " << kilometers << "\n\n";
	cout << " The distance in meters is " << meters << "\n\n";
	cout << " The distance in centimeters is " << centimeters << "\n\n";
	cout << " The distance in milimeters is " << milimeters << "\n\n";
	cout << " Program has ended" << endl;

	system("pause");

	float radius, circumference;

	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " This program takes in radius to compute circumference of circle"<< endl;
	cout << " ******************************************\n\n";

	//Get user input
	cout << "Please input radius: ";
	cin >> radius;

	//Compute circumference to 2 * PI * radius
	circumference = 2 * PI * radius;

	//Display the circumference 
	cout << " The circumference is = " << circumference << "\n\n";
	cout << "Program has ended" << endl;

	system("pause");

	



	return 0;
}