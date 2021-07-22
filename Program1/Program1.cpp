//***************************************************************
//
//  Developer:         Jessica Page
//
//  Program #:         Program 1
//
//  File Name:         Program1.cpp
//
//  Course:            COSC 1337 Programming Fundamentals II 
//
//  Due Date:          6/8/2021
//
//  Instructor:        Prof. Fred Kumi 
//
//  Chapter:           Chapter 1
//
//  Description: This program will display the meal cost, 
//   tax amount, tip amount, and total bill on the screen
//***************************************************************

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void developerInfo();

//***************************************************************
//
//  Function:     main
// 
//  Description:  The main function of the program
//
//  Parameters:   None
//
//  Returns:      Zero (0) 
//
//**************************************************************
int main()
{
    developerInfo();    // Do not delete this statement

    // Write your code here
    double mealCharge = 44.50;                     // Meal cost $44.50
    double tax = mealCharge * .0675;               // 6.75% sales tax
    double tip = (mealCharge + tax) * .15;         // 15% tip
    double finalBill = mealCharge + tax + tip;      // Total of charges

    cout << "Meal charge: $" << mealCharge << endl;
    cout << "Tax: $" << tax << endl;
    cout << "Tip: $" << tip << endl;
    cout << "Final bill: $" << finalBill << endl;

    system("PAUSE");
    return 0;
}


//***************************************************************
//
//  Function:     developerInfo
// 
//  Description:  The developer's information
//
//  Parameters:   None
//
//  Returns:      N/A 
//
//**************************************************************
void developerInfo()
{
    cout << "Name:    Jessica Page" << endl;
    cout << "Course:  Programming Fundamentals II" << endl;
    cout << "Program: One"
        << endl
        << endl;
} // End of developer
