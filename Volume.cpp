// Project Name: Assignment 1, Goal 2 - Volume
// Programmer Name: Thomas Blinstrub
// Date Written: September 6, 2022
// Description: Calculates the volume of a rectangle or square
// Original code provided by Dr. Southwell

#include <iostream> // Header file to enable console I/O
using namespace std;

// Begin main Function Definition
int main( )
{
	// Initialization
	// Declare data objects:
	
	double length, width, height, volume; // Objects are data type double
	
	// Display identification on screen:
	
	cout << "Assignment 1, Goal 2 - Volume" << endl;
	cout << "Programmed by Tom Blinstrub" << endl;
	
	// Input
	// Prompt for rectangle or square dimensions, and store
	// keyboard responses in respective data objects:
	
	cout << "What is the length of the rectangle or square?" << endl;
	cin >> length;
	cout << "What is the width of the rectangle or sqaure?" << endl;
	cin >> width;
	cout << "What is the height of the rectangle or square?" << endl;
	cin >> height;
	
	// Processing
	// Calculate area of rectangle or square and
	// assign result to volume data object:
	
	volume = length * width * height;
	
	// Output
	// Display results in a complete sentence:
	
	cout << "The volume of the rectangle or square with dimensions " << length;
	cout << " by " << width << " by " <<height<< " is " << volume << " cubic units." << endl;
	
	// Termination
	// Indicate normal EOJ:
	
	cout << endl << "Normal job termination" << endl;
	return 0;

}
// End of main function
