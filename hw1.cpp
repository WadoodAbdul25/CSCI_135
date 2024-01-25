#include <iostream>
#include <string>

int main() {
    std::string name;
    std::string major;
    std::string city;

    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cin.ignore(); // Clear input buffer
    
    std::cout << "\nEnter your major: ";
    std::getline(std::cin, major);
    
    std::cout << "\nWhere are you from? (city): ";
    std::getline(std::cin, city);

    std::cout << "Your name is " << name << ", you are from " << city << ", your major is " << major << std::endl;

    return 0;
}
