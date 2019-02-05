


/***********************************************
* Name: Nevin O'Konski
* Email: okonsk89@students.rowan.edu
***********************************************/

#include <iostream>

using namespace std; 

const  float PI = 3.14159;

int main()
{

	float miles, kilometers, meters, centimeters, milimeters;

	//Display purpose of the program
	cout << " ***************************************************************" << endl;
	cout << " Converts Miles to Kilometers, meters, cenimeters and milimeters" << endl;
	cout << " ***************************************************************\n\n";

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

	//Start new program
	float radius, circumference;

	//Display purpose of next program
	cout << " ***************************************************************" << endl;
	cout << " This program takes in radius to compute circumference of circle" << endl;
	cout << " ***************************************************************\n\n";

	//Get user input
	cout << "Please input radius: ";
	cin >> radius;

	//Compute circumference to 2 * PI * radius
	circumference = 2 * PI * radius;

	//Display the circumference 
	cout << " The circumference is = " << circumference << "\n\n";
	cout << "Program has ended" << endl;

	system("pause");

	//start new program
	float fahrenheit, celsius;

	//Display purpose of next program
	cout << " ************************************************************************************" << endl;
	cout << " This program takes in a temperature in degrees celcius and converts it to farenheit." << endl;
	cout << " ************************************************************************************\n\n";

	//Get user input
	cout << "Please input a temperature in degrees celcius: ";
	cin >> celsius;

	//Change Celsius to Farenheit
	fahrenheit = (9 / 5) * celsius + 32;

	//Display temperature in farenheit
	cout << "The temperature is " << fahrenheit << " degrees farenheit." << "\n\n";
	cout << "The program has ended." << endl;

	system("pause");

	//Start new program
	float years, months, days, hours, minutes, seconds;

	//Display the purpose of program
	cout << " *********************************************************************************************************************" << endl;
	cout << " This program ask for your age in years and conputes the eqivalant number of months, days, hours, minutes and seconds." << endl;
	cout << " *********************************************************************************************************************\n\n";

	//Get user input
	cout << "Please input your age: ";
	cin >> years;
	
	//Convert years to months, days, hours and seconds
	months = years * 12;
	days = years * 365.25;
	hours = days * 24;
	minutes = hours * 60;
	seconds = minutes * 60;

	//Display times
	cout << "Your age in years is eqivilant to: \n";
	cout << months << " months. \n";
	cout << days << " days. \n";
	cout << hours << " hours. \n";
	cout << minutes << " minutes. \n";
	cout << seconds << " seconds. \n\n";
	cout << "The program has ended." << endl;

	system("pause");

	//start new program
	//Display the purpose of program
	cout << " *********************************************" << endl;
	cout << " This program displays an N as a block letter." << endl;
	cout << " *********************************************\n\n";

	//Display the letter
	cout << "*    *\n";
	cout << "**   *\n";
	cout << "* *  *\n";
	cout << "*  * *\n";
	cout << "*   **\n";
	cout << "*    *\n\n\n";
	cout << "The program has ended." << endl;

	system("pause");
	return 0;
}