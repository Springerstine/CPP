#include <iostream>

using std::cout;
using std::cin;
using std::endl;



int main() {
   // Constants
   const int SMALL_ROOM_CHARGE = 25;
   const int LARGE_ROOM_CHARGE = 35;
   const float TAX_RATE = 0.06;
   const int EXPIRIATION_DATE = 30;

   // Variables
   int smallRoomTotal;
   int largeRoomTotal;
   float billTax;
   float billTotal;


   cout << "How many small rooms would you like cleaned?: ";
   cin >> smallRoomTotal;

   cout << "How many large rooms would you like cleaned?: ";
   cin >> largeRoomTotal;

   billTotal = ((smallRoomTotal * SMALL_ROOM_CHARGE ) + (largeRoomTotal * LARGE_ROOM_CHARGE));
   billTax = billTotal * TAX_RATE;

   cout << "\nEstimate for carpet cleaning\n";
   cout << "Number of small rooms: " << smallRoomTotal << "\n";
   cout << "Number of large rooms: " << largeRoomTotal << "\n";
   cout << "Price per small room: $" << SMALL_ROOM_CHARGE << "\n";
   cout << "Price per large room: $" << LARGE_ROOM_CHARGE << "\n";
   cout << "Cost: $" << billTotal << "\n";
   cout << "Tax: $" << billTax << "\n";
   cout << "====================================\n";

   cout << "Your total bill is: " << billTotal + billTax << "\n";
   cout << "This estimate is valid for " << EXPIRIATION_DATE << " days." << endl;
}