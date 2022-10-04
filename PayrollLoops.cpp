/*
Project Name: Lab 4 - Payroll Calculation with Loops
Programmer Name: Thomas Blinstrub
Date Written: September 27, 2022
Class: CST 180 FA 710
Professor: Dr. Don Southwell
Description: Payroll calculator providing pay rates using 
             minimum wage plus shift premiums and overtime calculations. Will
             display paid wages based on user's inputs.
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
    int emplID;                 //Employee ID
    char payCode;               //Code for type of pay, shift premium or not, user selected
    double hours;               //Employee hours worked
    char moreEmployees;         //Repeat Do/While option
    int emplCount = 0;          //Number of employees entered
    double payRoll = 0;         //Payroll for each coded category
    double totalPayRoll = 0;    //Payroll for all employees submitted

    //Begin program
    cout << "Assignment: Lab 4\n";
    cout << "Programmed by Tom Blinstrub.\n\n";

    //Begin intro
    cout << "Donatello's Pizza Shop Pay Calculator\n";
    cout << "All calculations based on Michigan minimum wage\n";

    //Loops for program
    do
    {    
        //User input
        //Employee Identification, pay code, hours worked
        cout << "Paycodes are as follows:\n";
        cout << "For minimum wage, type 'M'\n";
        cout << "For minimum wage plus $1.00, type 'O'\n";
        cout << "For minimum wage plus $2.00, type 'T'\n";
        cout << "With only spaces between, enter the following fields:\n";
        cout << "Employee ID, employee paycode, employee hours worked\n";
        cin >> emplID; cin >> payCode; cin >> hours;

        emplCount++;

        //Character input check
        //If the following characters are not entered, returns error
        if (payCode == 'M' || payCode == 'm' || payCode == 'O' || payCode == 'o' || payCode == 'T' || payCode == 't')
            {
                cout << "Calculating pay...\n\n";
            }
            else 
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
            case 'M' : 
                cout << setprecision(2)<< fixed << "Your calculations will go off a value of $" << minWage << " per hour.\n";             
                break;
            case 'm' : 
                cout << setprecision(2)<< fixed << "Your calculations will go off a value of $" << minWage << " per hour.\n";              
                break;
            case 'T' : 
                cout << setprecision(2)<< fixed << "Your calculations will go off a value of $" << premT << " per hour.\n\n";
                break;
            case 't' : 
                cout << setprecision(2)<< fixed << "Your calculations will go off a value of $" << premT << " per hour.\n\n";
                break;
            case 'O' : 
                cout << setprecision(2)<< fixed << "Your calculations will go off a value of $" << premO << " per hour.\n\n";
                break;
            case 'o' : 
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
                    payRoll = payCodeMOT;                
                } 
                else if (payCode == 'O' || payCode == 'o' ) 
                {   
                    payRoll = payCodeOOT;
                } 
                else if (payCode == 'T' || payCode == 't') 
                {   
                    payRoll = payCodeTOT;                
                } 
                else 
                { 
                    cout << "M, O, or T are the only accepted inputs.\n"; 
                }
            } 
        else 
            {
                if (payCode == 'M' || payCode == 'm') 
                {   
                    payRoll = payCodeM;                
                }
                else if (payCode == 'O' || payCode == 'o' ) 
                {   
                    payRoll = payCodeO;               
                } 
                else if (payCode == 'T' || payCode == 't') 
                {   
                    payRoll = payCodeT;
                } 
                else 
                { 
                    cout << "M, O, or T are the only accepted inputs.\n";
                }
            }
            cout << setprecision(2) << fixed << "Employee number " << emplID << " will receive $" << payRoll << " for their pay.\n";

            //Totaled payroll for all employees entered    
            totalPayRoll = payRoll + totalPayRoll;

            cout << "Would you like to process more employees?\n";
            cout << "Y/N\n\n";
            cin >> moreEmployees;

    } while (moreEmployees == 'Y' || moreEmployees == 'y');

    //Exit for amount of employees and payroll processed
    cout << emplCount << " employees updated this session.\n";

    cout << setprecision(2) << fixed << "Total paid out is $" << totalPayRoll << ".\n";

    cout << "Normal Job Termination" << endl;

    return 0;
}
//End of program