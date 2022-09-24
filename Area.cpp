// Project Name: Assignment 1A - Area
// Programmer Name: Thomas Blinstrub
// Date Written: September 6, 2022
// Description: Calculates the area of a rectangle 

#include <iostream> // Header file to enable console I/O
using namespace std;

// Begin main Function Definition
int main( )
{
	// Initialization
	// Declare data objects:
	
	double length, width, area; // Objects are data type double
	
	// Display identification on screen:
	
	cout << "Assignment 1A" << endl;
	cout << "Programmed by Tom Blinstrub" << endl;
	
	// Input
	// Prompt for rectangle dimensions, and store
	// keyboard responses in respective data objects:
	
	cout << "What is the length of the rectangle?" << endl;
	cin >> length;
	cout << "What is the width of the rectangle?" << endl;
	cin >> width;
	
	// Processing
	// Calculate area of rectangle and
	// assign result to area data object:
	
	area = length * width;
	
	// Output
	// Display results in a complete sentence:
	
	cout << "The area of the rectangle with dimensions " << length;
	cout << " by " << width << " is " << area << "." << endl;
	
	// Termination
	// Indicate normal EOJ:
	
	cout << endl << "Normal job termination" << endl;
	return 0;

}
// End of main function
