/*
Project Name: Assignment 1B - Speed
Programmer Name: Thomas Blinstrub
Date Written: September 6, 2022
Class: CST 180 FA 710
Professor: Dr. Don Southwell
Description: Calculate miles per hour of a vehicle
*/

#include <iostream>		//Header file for console IO
using namespace std;

//Begin main function definition
int main()

{
	//Declare variables
	double struct, time, MPH;
	
	cout << "Assignment 1B\n";
	cout << "Programmed by Tom Blinstrub.\n\n";
		
	//Begin user input
	//Ask for distance
	cout << "How many miles were driven?\n";
	cin >> struct;
	
	//Ask for time
	cout << "How much time in hours passed while driving?\n";
	cin >> time;
	
	//MPH calculation
	MPH = struct / time;
	
	//Calculate MPH
	cout <<struct<< " miles were driven in " <<time<< " hours.\n";
	cout << "This means you were travelling at an average rate of " <<MPH<< " MPH.\n\n";
	
	//End of program
	cout << "Thank you for driving safely.\n";
	cout << "Normal job termination.";
	
	return 0;
	
}
//End of function
