#include <iostream>

using std::cout;
using std::cin;
using std::endl;

const int SMALL_ROOM_CHARGE = 25;
const int LARGE_ROOM_CHARGE = 35;
const float TAX_RATE = .06;

int main() {
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
   cout << "This estimate is valid for 30 days" << endl;
}