/*
Program File Name: Test1Project1
Programmer: Josh Richards
Date: October 11, 2024
Requirements:
Create a C++ program that does the following:

Crazy Al’s Computer Emporium is a retail seller of home computers. The sales staff at Crazy Al’s works strictly on commission. 
At the end of the month, each salesperson’s commission is calculated according to Table 1.


Table 1 Commission rates
Sales This Month Commission Rate
Less than $10,000 5%
$10,000–$14,999 10%
$15,000–$17,999 12%
$18,000–$21,999 14%
$22,000 or more 16%


For example, a salesperson with $16,000 in monthly sales will earn a 12 percent commission ($1,920.00).


Another salesperson with $20,000 in monthly sales will earn a 14 percent
commission ($2,800.00). Because the staff only gets paid once per month, Crazy Al’s allows each employee to take
up to $1,500 per month in advance. When sales commissions are calculated, the amount of each employee’s
advanced pay is subtracted from the commission. If any salesperson’s commissions are less than the amount of their advance, 
they must reimburse Crazy Al’s for the difference.


Here are two examples: Beverly and John have $21,400 and $12,600 in sales, respectively.
Beverly’s commission is $2,996 and John’s commission is $1,260. Both Beverly and John
took $1,500 in advance pay. At the end of the month, Beverly gets a check for $1,496, but
John must pay $240 back to Crazy Al’s.


Example output

Program Output with Example Input Shown in Bold
Enter the salesperson's monthly sales: 19600
Enter the amount of advanced pay for this salesperson: 1000


Pay Results
-----------
Sales: $19600.00
Commission Rate: 0.14
Commission: $2744.00
Advanced Pay: $1000.00
Remaining Pay: $1744.


You do NOT need to make the program repeatable to allow for

multiple sales agents. However, you will receive an extra 5 points if you

can do so.



*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;



int main()
{
    char repeat = 'y';

    while(true){
    double sales, advancedPay, commission, commissionRate, remainingPay;

    cout << "Enter the salesperson's monthly sales: ";
    cin >> sales;

    cout << "Enter the amount of advanced pay for this salesperson: ";
    cin >> advancedPay;

    if (sales < 10000) {
        commissionRate = 0.05;
    }
    else if (sales >= 10000 && sales <= 14999) {
        commissionRate = 0.10;
    }
    else if (sales >= 15000 && sales <= 17999) {
        commissionRate = 0.12;
    }
    else if (sales >= 18000 && sales <= 21999) {
        commissionRate = 0.14;
    }
    else {
        commissionRate = 0.16;
    }

    commission = sales * commissionRate;

    remainingPay = commission - advancedPay;

    cout << "Pay Results";
    cout << "---------------";
    cout << "Sales: $" << sales << endl;
    cout << "Commission Rate: " << commissionRate << endl;
    cout << "Commission: $" << commission << endl;
    cout << "Advanced Pay: $" << advancedPay << endl;

    if (remainingPay >= 0) {
        cout << "Remaining Pay: $" << remainingPay << endl;
    }
    else {
        cout << "Amount Owed: $" << -remainingPay << endl;
    }
    cout << "Would you like to calculate for another sales agent? (y/n): ";
    cin >> repeat;
    {
        if (repeat == 'y' || repeat == 'Y') {
            continue;
        }
        else if (repeat == 'n' || repeat == 'N') {
            cout << "Have a good day, Goodbye!" << endl;
            break;
        }
        else {
            cout << "Invalid input! Exiting program." << endl;
            break;
        }

    }
    }
    return 0;
}

