/*
Project Name: Program 4: Payroll Calculation with Taxes
Programmer Name: Thomas Blinstrub
Date Written: October 4, 2022
Class: CST 180 FA 710
Professor: Dr. Don Southwell
Description: Calculate the payroll for a company with data drawn from a file. Program
                will calculate gross pay from hours worked accounting for various pay
                codes and overtime. Program will then calculate pay with listed tax
                rates to give net pay. A paystub will be produced for each employee
                after pay has been completed.
*/

#include <iostream>                                                         //Header file for console IO
#include <iomanip>                                                          //Decimal placement, and layout file
#include <fstream>                                                          //File operations
#include <string>                                                           //String operations

using namespace std;

int main()                                                                  //Begin main function

{
    //File reading/writing
    ifstream employeeInputData;                                             //File read from
    ofstream employeePayStub;                                               //File written to

    //Constants
    const double minWage = 9.87;                                            //Minimum wage for State of Michigan
    const double taxFed = 0.15;                                             //Federal tax rate
    const double taxState = 0.05;                                           //State tax rate
    const double taxSocSec = 0.075;                                         //Social Security tax rate
    const double taxMedic = 0.015;                                          //Medicare tax rate

    //Variables
    string firstName, lastName;                                             //Input from file
    int employeeID;                                                         //Input from file
    char payCode;                                                           //Input from file
    double hoursWorked, medicTax, ssiTax, stateTax, fedTax, payRoll;        //Input from file
    int emplCount = 0;                                                      //Number of employees processed accumulator

    //Open files for read/write
    employeeInputData.open("payrolldata.txt");
    employeePayStub.open("payroll_report.txt");
    
    //Begin Program
    while (employeeInputData >> firstName >> lastName >> employeeID >> payCode >> hoursWorked)
        {
        //IF statement Calculations
        double otHours = (hoursWorked - 40);
        double payCodeM = (hoursWorked) * (minWage);                                            //Calculate minimum wage
        double payCodeO = (hoursWorked) * (minWage + 3.00);                                     //Calculate minimum wage plus $3.00
        double payCodeT = (hoursWorked) * (minWage + 6.00);                                     //Calculate minimum wage plus $6.00
        double payCodeMOT = (40 * minWage) + ((minWage * 1.50) * otHours);                      //Calculate minimum wage with overtime
        double payCodeOOT = (40 * minWage) + (((minWage + 3.00) * 1.50) * otHours);             //Calculate overtime with pay code
        double payCodeTOT = (40 * minWage) + (((minWage + 6.00) * 1.50) * otHours);             //Calculate overtime with pay code

            if (hoursWorked > 40)
                {
                    if (payCode == 'm' || payCode == 'M')
                    {
                        payRoll = payCodeMOT;
                    }
                    else if (payCode == 'o' || payCode == 'O')
                    {
                        payRoll = payCodeOOT;
                    }
                    else if (payCode == 't' || payCode == 'T')
                    {
                        payRoll = payCodeTOT;
                    }
                    else {
                        employeePayStub << "\t""*************************************************" << endl;
                        employeePayStub << "\t""***INVALID PAY CODE -- CHECK EMPLOYEE PAY CODE***" << endl;
                        employeePayStub << "\t""*************************************************" << endl;
                    }
                }
            else
                {
                    if (payCode == 'm' || payCode == 'M')
                    {
                        payRoll = payCodeM;
                    }
                    else if (payCode == 'o' || payCode == 'O')
                    {
                        payRoll = payCodeT;
                    }
                    else if (payCode == 't' || payCode == 'T')
                    {
                        payRoll = payCodeT;
                    }
                    else {
                        employeePayStub << "\t""*************************************************" << endl;
                        employeePayStub << "\t""***INVALID PAY CODE -- CHECK EMPLOYEE PAY CODE***" << endl;
                        employeePayStub << "\t""*************************************************" << endl;
                    }
                }

        //Final write Calculations
        double fedTax = payRoll * taxFed;
        double stateTax = payRoll * taxState;
        double ssiTax = payRoll * taxSocSec;
        double medicTax = payRoll * taxMedic;
        double payRollNet = payRoll - (fedTax + stateTax + ssiTax + taxMedic);
        double totalPayRoll = payRollNet + totalPayRoll;

            employeePayStub << "*********************************************************" << endl;
            employeePayStub << "\t\t\t" "Pay Stub" << endl;
            employeePayStub << "Employee:" "\t\t\t" << firstName << " " << lastName << endl;
            employeePayStub << "Employee ID:" "\t\t\t" << employeeID << endl;
            employeePayStub << "Pay Code:" "\t\t\t" << payCode << endl;
            employeePayStub << setprecision(2) << fixed << "Hours Punched:" "\t\t\t" << right << hoursWorked << endl;
            employeePayStub << setprecision(2) << fixed << "PreTax Earnings:" "\t\t" << right << payRoll << "\n\n";
            employeePayStub << setprecision(2) << fixed << "\t" "Federal income tax:" "\t" "$ " << right << fedTax << endl;
            employeePayStub << setprecision(2) << fixed << "\t" "State income tax:" "\t" "$ " << right << stateTax << endl;
            employeePayStub << setprecision(2) << fixed << "\t" "Social Security tax:" "\t" "$ " << right << ssiTax << endl;
            employeePayStub << setprecision(2) << fixed << "\t" "Medicare tax" "\t\t" "$ " << right << medicTax << "\n\n";
            employeePayStub << setprecision(2) << fixed << "Earnings After Taxes:" "\t\t" "$ " << right << payRollNet << endl;
            employeePayStub << "*********************************************************" << "\n\n\n";
            emplCount++;
            employeePayStub << "Employees processed: " << emplCount << endl;
            employeePayStub << "Total paid out for session: $ " << totalPayRoll << "\n\n";
        }
    //Close the accessed file(s)
    employeeInputData.close();
    employeePayStub.close();

    return 0;
}
//End of program