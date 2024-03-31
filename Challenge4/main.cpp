#include "iostream"

using namespace std;

/*
*  This program asks a user to enter the following:
*     An integer representing the number of cents
*     assume the number of cents entered is greater than 0
*     the program will then display how to provide that change 
*
*/

int main() {
   // Constants
   const int DOLLAR_VALUE = 100;
   const int QUARTER_VALUE = 25;
   const int DIME_VALUE = 10;
   const int NICKEL_VALUE = 5;
   const int PENNY_VALUE = 1;

   // Variables
   int changeTotal;
   int numOfDollars;
   int numOfQuarters;
   int numOfDimes;
   int numOfNickels;
   int numOfPennies;
   

   cout << "Please enter the total cents: "; 
   cin >> changeTotal;

   // Calculate the number of dollars
   numOfDollars = changeTotal / DOLLAR_VALUE;
   changeTotal -= (numOfDollars * DOLLAR_VALUE);

   // Calculate the number of quarters
   numOfQuarters = changeTotal / QUARTER_VALUE;
   changeTotal -= (numOfQuarters * QUARTER_VALUE);

   // Calculate the number of dimes
   numOfDimes = changeTotal / DIME_VALUE;
   changeTotal -= (numOfDimes * DIME_VALUE);

   // Calculate the number of nickels
   numOfNickels = changeTotal / NICKEL_VALUE;
   changeTotal -= (numOfNickels * NICKEL_VALUE);

   // Calculate the number of pennies
   numOfPennies = changeTotal / PENNY_VALUE;
   changeTotal -= (numOfPennies * PENNY_VALUE);

   cout << "----------------------------" << endl;
   cout << "Dollars: " << numOfDollars << endl;
   cout << "Quarters: " << numOfQuarters << endl;
   cout << "Dimes: " << numOfDimes << endl;
   cout << "Nickels: " << numOfNickels << endl;
   cout << "Pennies: " << numOfPennies << endl;
   cout << "----------------------------" << endl;
   cout << "Total Change left: " << changeTotal << endl;





}