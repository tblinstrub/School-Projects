/* Project Name: Assignment 2 - Pizza Slices Per Pizza
Programmer Name: Thomas Blinstrub
Date Written: September 15, 2022
Class: CST 180 FA 710
Professor: Dr. Don Southwell
Description: Calculate the area of a pizza and determine how many slices a pizza can have
				based on a standard slice dimension.
*/

#include <iostream>		//Header file for console IO
#include <cmath>		//File for math functions, if deciding to use pow function
#include <iomanip>		//Decimal place manipulation
using namespace std;

int main()
{
	//Declare variables
	//Constant variables
	double const slice = 14.125;				//Area of a slice of pizza
	double const pi = 3.14159;					//Pi number for calculations
	double const pizzaPrice = .105;				//Pizza price per square inch
	
	//User created variables
	double pizzaDiameter;
	

	
	//Begin program
	
	cout << "Assignment: Program 2\n";
	cout << "Programmed by Tom Blinstrub.\n\n";
	
	//Begin intro
	cout << "Welcome to Don's Pizza, Donatello's favorite pizzeria in New York city!\n";
	cout << "Where history is forged like melted cheese...\n";
	cout << "It sticks together as one, but it's still soft and squishy in the middle.\n\n";
	cout << "BOOYAKASHA!\n\n";
	
	cout << "We make round pizzas, for every occasion.\n";
	cout << "Tell us your pie size, and we'll make it just right.\n";
	cout << "In inches, how large do you want your pizza's diameter to be?\n";
	
	//User variable input
	cin >> pizzaDiameter;
	
	//Calculation variables
	double radius = pizzaDiameter / 2;			//Formula for radius
	//Can also use this formula: pi * radius * radius
	double pizzaArea = pi * pow(radius, 2.0);	//Formula for area of a circle
	float sliceQty = pizzaArea / slice;			//Formula for number of slices per pizza
	double pizzaCost = pizzaArea * pizzaPrice;	//Formula for pizza cost
	
	//Calculations completed
	//Number of slices and final cost
	cout << "All right, pizza dude.\n";
	cout << fixed << setprecision(1) << "Your custom pizza will have " << sliceQty << " pizza slices.\n\n";	
	cout << fixed << setprecision(2) << "It will cost $" << pizzaCost << " for a whole pie.\n";
	
	//Outro
	cout << "Thanks for choosing Don's!\n";
	
	
	return 0;
	
}
//End of function
