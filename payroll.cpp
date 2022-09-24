/*
Project Name: Lab 3 - Payroll Calculation
Programmer Name: Thomas Blinstrub
Date Written: September 20, 2022
Class: CST 180 FA 710
Professor: Dr. Don Southwell
Description: Payroll calculator providing pay rates using
             minimum wage plus shift premiums and overtime calculations.
*/

#include <iostream>                     //Header file for console IO
#include <cmath>                        //File for math functions, if deciding to use pow function
#include <iomanip>                      //Decimal place manipulation

using namespace std;

int main()

{
    //Constant variables
    //Source as of 9/19/2022: https://www.michigan.gov/leo/bureaus-agencies/ber/wage-and-hour/links/the-michigan-minimum-wage-rate
    const double minWage = 9.87;

    //User created variables
    int emplID;             //Employee ID
    char payCode;           //Code for type of pay, shift premium or not, user selected
    double hours;           //Employee hours worked

    //Begin program
    cout << "Assignment: Lab 3\n";
    cout << "Programmed by Tom Blinstrub.\n\n";

    //Begin intro
    cout << "Donatello's Pizza Shop Pay Calculator\n";
    cout << "All calculations based on Michigan minimum wage\n";

    //User input
    //Employee Identification
    cout << "Enter employee ID:\n";
    cin >> emplID;

    //User input
    //Employee Hours worked
    cout << "Enter the hours employee number " << emplID << " worked in a specific ";
    cout << "pay period:\n";
    cin >> hours;

    //User input
    //Employee pay code
    cout << "Please choose the following pay code for employee " << emplID << ".\n\n";
    cout << "For minimum wage, type 'M'\n";
    cout << "For minimum wage plus $1.00, type 'O'\n";
    cout << "For minimum wage plus $2.00, type 'T'\n";
    cin >> payCode;

    //Character input check
    //If the following characters are not entered, returns error
    if (payCode == 'M' || payCode == 'm' || payCode == 'O' || payCode == 'o' || payCode == 'T' || payCode == 't')
        {
            cout << "Calculating pay...\n\n";
        }
        else //(payCode != 'M' || payCode != 'm' || payCode != 'O' || payCode != 'o' || payCode != 'T' || payCode != 't')
        {
            cout << "Incorrect user input.\n";
        }

    //Wage Premium Calculations
    //Certain jobs have premiums, this calculates those premiums
    double premO = minWage + 1.00;
    double premT = minWage + 2.00;

    //Job premium details
    //Based on user input, this will explain how inputs are getting calculated
    switch (payCode)
    {
    case 'M' : cout << "You entered M for minimum wage set at $" << minWage << " per hour.\n";
                        cout << setprecision(2)<< fixed << "Your calculations will go off this value.\n\n";
        break;
    case 'm' : cout << "You entered m for minimum wage set at $" << minWage << " per hour.\n";
                        cout << setprecision(2)<< fixed << "Your calculations will go off this value.\n\n";
        break;
    case 'T' : cout << "You entered T for minimum wage set at $" << minWage << " per hour with a premium of $2.00 per hour.\n";
                        cout << setprecision(2)<< fixed << "Your calculations will go off a value of $" << premT << " per hour.\n\n";
        break;
    case 't' : cout << "You entered t for minimum wage set at $" << minWage << " per hour with a premium of $2.00 per hour.\n";
                        cout << setprecision(2)<< fixed << "Your calculations will go off a value of $" << premT << " per hour.\n\n";
        break;
    case 'O' : cout << "You entered O for minimum wage set at $" << minWage << " per hour with a premium of $1.00 per hour.\n";
                        cout << setprecision(2)<< fixed << "Your calculations will go off a value of $" << premO << " per hour.\n\n";
        break;
    case 'o' : cout << "You entered o for minimum wage set at $" << minWage << " per hour with a premium of $1.00 per hour.\n";
                        cout << setprecision(2)<< fixed << "Your calculations will go off a value of $" << premO << " per hour.\n\n";
        break;    
    
    default: cout << "You did not enter M, O, or T\n\n";
        break;
    }

    //Pay Calculations
    //Based on user input above
    //Includes formula for calculating overtime based on 1.5x the hourly rate
    //Calculations indicate based on job premium selection, including overtime if necessary
    double otHours = hours - 40;
    double payCodeM = hours * minWage;
    double payCodeO = hours * (minWage + 1.00);
    double payCodeT = hours * (minWage + 2.00);
    double payCodeMOT = (40 * minWage) + ((1.50 * minWage) * otHours);
    double payCodeOOT = (40 * minWage) + (((minWage + 1.00) * 1.50) * otHours);
    double payCodeTOT = (40 * minWage) + (((minWage + 2.00) * 1.50) * otHours);    

    //IF else for determing overtime pay
    //Displays appropriate calculation based on user input
    //Also gives final prompt to rerun program if any wrong inputs are received    
    if (hours > 40) 
        {
            
            if (payCode == 'M' || payCode == 'm') 
            {
                cout << setprecision(2) << fixed << "Employee number " << emplID << " will receive $" << payCodeMOT << " for their pay.";
            } 
            else if (payCode == 'O' || payCode == 'o' ) 
            {
                cout << setprecision(2) << fixed << "Employee number " << emplID << " will receive $" << payCodeOOT << " for their pay.";
            } 
            else if (payCode == 'T' || payCode == 't') 
            {
                cout << setprecision(2) << fixed << "Employee number " << emplID << " will receive $" << payCodeTOT << " for their pay.";
            } 
            else 
            { 
                cout << "Rerun program and only enter M, O, or T variables."; 
            }
        } 
    else 
        {
            if (payCode == 'M' || payCode == 'm') 
            {
                cout << setprecision(2) << fixed << "Employee number " << emplID << " will receive $" << payCodeM << " for their pay.";
            }
            else if (payCode == 'O' || payCode == 'o' ) 
            {
                cout << setprecision(2) << fixed << "Employee number " << emplID << " will receive $" << payCodeO << " for their pay.";
            } 
            else if (payCode == 'T' || payCode == 't') 
            {
                cout << setprecision(2) << fixed << "Employee number " << emplID << " will receive $" << payCodeT << " for their pay.";
            } 
            else 
            { 
                cout << "Rerun program and only enter M, O, or T variables.";
            }
        }
 
    return 0;
}
//End of program
