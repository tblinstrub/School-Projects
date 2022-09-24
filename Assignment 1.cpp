// Project Name: Assignment 1A - Area
// Programmer Name: Tom Blinstrub
// Date Written: September 1, 2022
// Description: Calculates the area of a rectangle 

#include <iostream> // Header file to enable console I/O
using namespace std;

// Begin main Function Definition
int main( )
{
	// Initialization
	// Declare data objects:
	
	double length, width, height, volume; // Objects are data type double
	
	// Display identification on screen:
	
	cout << "Assignment 1A" << endl;
	cout << "Programmed by Tom Blinstrub" << endl << endl;
	
	// Input
	// Prompt for rectangle dimensions, and store
	// keyboard responses in respective data objects:
	
	cout << "What is the length of the rectangle?" << endl;
	cin >> length;
	cout << "What is the width of the rectangle?" << endl;
	cin >> width;
	cout << "What is the height of the rectangle?" << endl;
	cin >> height;
	
	// Processing
	// Calculate area of rectangle and
	// assign result to area data object:
	
	volume = length * width * height;
	
	// Output
	// Display results in a complete sentence:
	
	cout << "The volume of the rectangle with dimensions " << length;
	cout << " by " << width << " by " << height << " is " << volume << "." << endl;
	
	// Termination
	// Indicate normal EOJ:
	
	cout << endl << "Normal job termination" << endl;
	system("pause");
	return 0;

}
// End of main function
