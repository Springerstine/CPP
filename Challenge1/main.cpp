#include <iostream>

int main() {
   int favorite_number;

   std::cout << "Please type in your favorite number between 1-100: ";
   std::cin >> favorite_number;
   std::cout << "That is an awesome number! " << favorite_number << " is my favorite number too!" << std::endl;

   
   return 0;
}