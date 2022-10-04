/*
Project Name: Lab 4 Part B - Celsius Conversion
Programmer Name: Thomas Blinstrub
Date Written: September 27, 2022
Class: CST 180 FA 710
Professor: Dr. Don Southwell
Description: Convert Fahrenheit to Celsius in increments of 10 starting with 0
                and ending with 100 degrees Celsius in a table
*/

#include <iostream>     //Header file for console IO
#include <iomanip>      //Visual layout manipulation

using namespace std;

//Begin main function
int main()
{
    //Functions for conversion
    double fahrenheit;
    float theMeat = 5.0 / 9.0;    // double celsius = theMeat * (fahrenheit - 32);

    cout << "Assignment: Lab 4B - Temperature Conversion with a loop" << endl;
    cout << "Programmed by Tom Blinstrub\n\n" << endl;

    //Begin table display
    cout << right << "\t\t" << "TEMPERATURE CONVERSION TABLE\n\n" << endl;

    cout << right << setw(24) << "Fahrenheit" << "\t\t" << right << setw(5) << "Celsius" << endl;
    cout << right << setw(25) << "----------" "\t" << setw(17) <<"----------" << endl;

        //Begin For Statement
        //Increments of 10 degrees for celsius conversion
        for (fahrenheit == 0; fahrenheit < 101; fahrenheit += 10)
            {
                double celsius = theMeat * (fahrenheit - 32);
                
                cout << right << fixed << showpoint << setprecision(1);
                cout << setw(21) << endl; 
                cout << right << fahrenheit << "\t\t\t" << right << setw(5) << celsius << endl;        
            }

    cout << "\t\t\t" << "END OF REPORT" << endl;

    return 0;
}
//End of program