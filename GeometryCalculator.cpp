/* 
Project Name - Geometry Calculator
Programmer Name - Thomas Blinstrub
Date Written - September 22, 2022
Class: CST 180 FA 710
Professor: Dr. Don Southwell
Description: This program will serve as a calculator to determine the area of a circle, area of a rectangle,
                area of a triangle, and area of a square. The user will select the geometric shape they wish
                to calculate and enter the requested dimensions. Once the user has entered the necessary
                dimensions, the program will determine if the inputs are correct and will calculate the
                area of the shape the user selected.
*/

#include <iostream>         //Header file for console IO
#include <cmath>            //Mathematical functions file
#include <iomanip>          //Manipulation of output

using namespace std;

int main()

{
//Begin program

// Constant 
// pi value for calculating circle area
const float pi = 3.14159;

//Declare variables
double cirRadius;
double rectSideA;
double rectSideB;
double sqSide;
double triBase;
double triHeight;
char userChoice;
char squareORrect;

//Meat and potatoes

cout << "Assignment: Program 3\n";
cout << "Programmed by Tom Blinstrub\n\n";

//Menu listing for user choice
cout << "Decide which shape to calculate the area of:\n";
cout << "1 - Square\n";
cout << "2 - Rectangle\n";
cout << "3 - Circle\n";
cout << "4 - Triangle\n";
cout << "5 - QUIT\n\n";
cin >> userChoice;

// Calculated variables
// double sqArea = sqSide * sqSide;
// double triArea = (triBase * triHeight) * 0.5;
// double rectArea = rectSideA * rectSideB;
// double cirRadiusSqr = cirRadius * cirRadius;
// double cirArea = pi * (cirRadius, 2);


//Begin user selected menu options
switch (userChoice)
{
    case '1':       //Square
        {
            cout << "We will determine the area of a square.\n";            
            cout << "Reminder:\n";
            cout << "If you have two sides with different lengths, it is not a square.\n";
            cout << "You should have chosen a rectangle.\n";
            cout << "Do you wish to continue? Y/N\n";
            cin >> squareORrect;                // User determine to continue with square or cancel

                //IF statement to make sure they have a square, not a rectangle
                if (squareORrect == 'Y' || squareORrect == 'y')
                {
                    cout << "Enter the length of the side to calculate in inches.\n";
                }
                else            // If wrong parameter is entered, prompt to relaunch with reason it is closing and end program
                {
                    cout << "Terminating program. Please relaunch.";
                    break;
                }

            //Return to Switch if 'Y' or 'y' is selected by user
            cin >> sqSide;                                  // User enters requested dimensions for geometric shape chosen
            double sqArea = sqSide * sqSide;                // Calculate the area based on user’s entered dimensions
            cout << "For a square with sides of " << sqSide << " inches,\n";
            cout << "you multiply " << sqSide << " * " << sqSide << ".\n";
            cout << setprecision(1) << fixed << "The area is " << sqArea << " square inches.\n";                // Show calculated area
            cout << "The formula is area = side length * side length.\n";           // Show user how to calculate the area of the shape requested by hand with calculated area in square inches        
        break;
        }
    case '2':       //Rectangle
        {
            cout << "We will determine the area of a rectangle.\n";
            cout << "Enter the length of side A.\n";
            cin >> rectSideA;                                   // User enters requested dimensions for geometric shape chosen
            cout << "Enter the length of side B.\n";
            cin >> rectSideB;                                   // User enters requested dimensions for geometric shape chosen
            double rectArea = rectSideA * rectSideB;            // Calculate the area based on user’s entered dimensions
            cout << "For a rectangle with sides of " << rectSideA << " inches,\n";
            cout << "and " << rectSideB << " inches, you multiply \n";
            cout << rectSideA << " * " << rectSideB << ".\n";
            cout << setprecision(1) << fixed << "The area is " << rectArea << " square inches.\n";          // Show calculated area
            cout << "The formula is area = length * width.\n";                  // Show user how to calculate the area of the shape requested by hand with calculated area in square inches        
        break; 
        }
    case '3':      //Circle
        {
            cout << "We will determine the area of a circle.\n";
            cout << "Enter the radius of the circle.\n";
            cin >> cirRadius;                                       // User enters requested dimensions for geometric shape chosen
            double cirRadiusSqr = cirRadius * cirRadius;            // Calculate the area based on user’s entered dimensions
            double cirArea = pi * (pow(cirRadius, 2.0));            // Calculate the area based on user’s entered dimensions
            cout << "For a circle we measure the radius, " << cirRadius << " and\n";
            cout << "square it giving us " << cirRadiusSqr << ". We then multiply\n";
            cout << "this value by PI, or 3.14159.\n";
            cout << setprecision(1) << fixed << "Doing such gives us an area of " << cirArea << " square inches.\n";            // Show calculated area
            cout << "The formula to find the area of a circle is area = PI * radius ^ 2\n";         // Show user how to calculate the area of the shape requested by hand with calculated area in square inches          
        break;
        }
    case '4':       //Triangle 
        {
            cout << "We will determine the area of a triangle.\n";
            cout << "Enter the base of the triangle:\n";
            cin >> triBase;                                         // User enters requested dimensions for geometric shape chosen
            cout << "Enter the height of the triangle:\n";
            cin >> triHeight;                                       // User enters requested dimensions for geometric shape chosen
            cout << "For a triangle with a base of " << triBase << " inches and \n";
            cout << "a height of " << triHeight << " inches, you multiply\n";
            cout << triBase << " by " << triHeight << " and then divide by 2.\n";
            double triArea = (triBase * triHeight) * 0.5;           // Calculate the area based on user’s entered dimensions
            cout << setprecision(1) << fixed << "The area is " << triArea << " square inches.\n";           // Show calculated area
            cout << "The formula is area = (base * height) / 2.\n";             // Show user how to calculate the area of the shape requested by hand with calculated area in square inches   
        break;
        }
    case '5':           //Decision to stop 
        {
            cout << "EXITING PROGRAM";
        break;
        }
    default:            // If wrong parameter is entered, prompt to relaunch with reason it is closing and end program         
            cout << "You did not enter the appropriate menu selection.\n";
            cout << "Please rerun the program and make a proper selection.";        
        break; 
}

    return 0;
}
//End program

