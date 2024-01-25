//Wadood Abdul, Program details: Take in three names using cin and print them out using cout
#include <iostream>
#include <string>

int main() {
    // Program to take three string inputs and display them back to the user
    std::string name1;
    std::string name2;
    std::string name3;

    std::cout << "Enter the first name: ";
    std::cin >> name1;
    std::cin.ignore(); // Clear input buffer
    
    std::cout << "\nEnter the second name: ";
    std::getline(std::cin, name2);
    
    std::cout << "\nEnter the third name: ";
    std::getline(std::cin, name3);

    std::cout << "Name 1 is " << name1 << std::endl;
    std::cout << "Name 2 is " << name2 << std::endl;
    std::cout << "Name 3 is " << name3 << std::endl;

    return 0;
}
