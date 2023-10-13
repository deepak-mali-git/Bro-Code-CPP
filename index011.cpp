#include<iostream>


int main(){

    std::string students[] = {"A","B","C","D","E","F","G"};

    for(std::string st : students){
        std::cout << st << "\n";
    }

    return 0;
}