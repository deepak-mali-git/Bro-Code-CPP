#include<iostream>

void bakePizza();
void bakePizza(std::string topin1);
void bakePizza(std::string toping1 , std::string toping2);

int main(){

    bakePizza();
    bakePizza("chess");
    bakePizza("chess" , "extra chess");


    return 0;
}

void bakePizza(){
    std::cout << "only piza " << std::endl;
}
void bakePizza(std::string topin1){
    std::cout << "pizza with " << topin1 << std::endl;
}
void bakePizza(std::string toping1 , std::string toping2){
    std::cout << "pizza with " << toping1 << " and " << toping2 << std::endl;
}
