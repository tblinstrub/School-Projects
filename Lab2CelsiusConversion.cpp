/*
Project Name: Lab 2 - Temperature Conversion
Programmer Name: Thomas Blinstrub
Date Written: September 13, 2022
Class: CST 180 FA 710
Professor: Dr. Don Southwell
Description: Convert Fahrenheit to Celsius
*/

#include <iostream>			//Header file for console IO
using namespace std;

//Begin main function definition
int main()
{
	//Declare Variables
	double fahrenheit;
	
	//Declare calculations, the meat and potatoes of the calculation
	float theMeat = 5.0 / 9.0;
	
	//Response to repeat
	char redo('y');
	
	
		do
		{
		//Program intro text with minor description
			cout << "Assignment: Lab 2 - Temperature Conversion\n";
			cout << "Convert degrees Fahrenheit into degrees Celsius.\n";
			cout << "Programmed by Tom Blinstrub\n\n";
	
			//Program Greeting (completely unnecessary)
			cout << "Thank you for trying to learn the superior measuring system, the metric system!\n\n";

			//	cout << "Please enter the temperature you'd like to know in degrees Celsius.\n";
			cout << "But first, a metric user pro tip:\n\n";
			cout << "Water freezes at 0 degrees Celsius and boils at 100 degress Celsius.\n\n";
	
			//Gather user input for temperature in Fahrenheight degress
			cout << "Let's get started with our calculations!\n";
			cout << "Please enter the temperature you would like to convert into Celsius degrees.\n";
			cin >> fahrenheit;
	
			//Declare entered variable Calculations
			double celsius = theMeat * ( fahrenheit - 32 );
			double sandScribbles=fahrenheit - 32;
	
			//Give calculation
			cout << "\nIf you're not near this handy program and don't have Google, here is what you can scribble in the sand for your work:\n";
			cout << "Do the following steps to get your answer:\n";
			cout << "Subtract your temperature by 32:\n";
			cout << fahrenheit << " - 32 = "<< sandScribbles << "\n";
			cout << "Next, you multiply your answer, " << sandScribbles << ", with 5/9 (five-ninths).\n";
			cout << fahrenheit << " Fahrenheit is equivalent to  " << celsius << " Celsius.\n";
			
		
			//Give another attempt option
			cout << "Would you like to perform another calculation? (Y/N)";
			cin >> redo;
		} while (redo == 'Y' || redo == 'y');

		cout << "Normal job termination.\n";
		cout << "Hasta pronto!\n";
	return 0;
}
//End of program
