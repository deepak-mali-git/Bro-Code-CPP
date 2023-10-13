#include<iostream>

int main(){
    
    std::string name = "deepak mali";

    name.insert(3,"@");
    std::cout << name;

    //name.empty();
    //name.clear();
    //name.append();
    //name.at(2);
    //name.erase(0,3);

    std::cout << "  "  << name.length();
    std:: cout << "  " << name.find('e');
    return 0;
}