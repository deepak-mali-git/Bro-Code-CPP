#include<iostream>

int main(){

    std::string name;
    int age;

    std:: cout << "What's your age?";
    std::cin >> age;
//BUFFER NEW LINE SPACE CREATE AN UNEXPECTED THING
    std::cout << "What's you full name? ";
    std::getline(std::cin >> std::ws,name);


    std::cout << "Hello " << name << "\n";
    std::cout << "You are " << age << " years old";

    return 0;
}