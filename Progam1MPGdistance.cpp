/* Project Name: Assignment 1 - Gas Mileage Distance
Programmer Name: Thomas Blinstrub
Date Written: September 8, 2022
Class: CST 180 FA 710
Professor: Dr. Don Southwell
Description: Calculate the average distance travelled for a Chevy Silverado during highway and city travel.
*/

#include <iostream>     //Header file for console IO
using namespace std;

//Begin main function definition
int main()
{
    //Declare variables
    //Constant values
    double tankSize = 25;       //Chevy Silverado tank size in gallons
    double townMPG = 16.2;      //Chevy Silverado average MPG when driven in town
    double highwayMPG = 20.4;   //Chevy Silverado average MPG when driven on a highway

    //Calculation variables
    double townDistance = tankSize * townMPG;   //Chevy Silverado average distance town MPG
    double highwayDistance = tankSize * highwayMPG;     //Chevy Silverado average distance highway MPG

    cout << "Assignment: Program 1\n";
    cout << "Programmed by Tom Blinstrub.\n\n";

    //Begin user input
    //State scenarios
    
    //Scenario #1: City driving
    cout << "Imagine you are driving your new (to you) Chevy Silverado.\n";
    cout << "You dream of driving the truck through city after city, but you ponder the amount of fuel required to embark on your journey.\n";
    cout << "Your truck comes with a fuel tank capacity of " <<tankSize<< " gallons.\n";
    cout << "For your city travels, you average " <<townMPG<< " miles per gallon during your commute.\n";
    cout << "You will be able to drive an average of " <<townDistance<< " miles for city commute.\n\n";

    //Scenario #2: Highway driving
    cout << "If you were driving your Chevy Silverado on the highway for your trip, you could expect the following results.\n";
    cout << "Your truck has a fuel tank capacity of " <<tankSize<< " gallons.\n";
    cout << "For your smooth highway drives, you average " <<highwayMPG<< " miles per gallons during your commute.\n";
    cout << "You will be able to drive an average of " <<highwayDistance<< " miles for a highway commute.\n";

    
    return 0;
}
//End of function