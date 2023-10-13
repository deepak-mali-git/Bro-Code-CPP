#include<iostream>


int main(){

    std::string car[] = {"lamborgini","ferari","jaguar","rang rover"};

    std::cout << sizeof(std::string) << std::endl;
    std::cout << sizeof(car) << std::endl;;
    std::cout << sizeof(car[1]) << std::endl;;
    std::cout << sizeof(car)/sizeof(car[0]) << std::endl;;
    return 0;
}