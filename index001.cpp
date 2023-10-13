#include<iostream>


namespace first{
    int x = 1;
}

namespace  second{
    int x = 2;
}

    // using namespace first;
int main(){
    // int x = 0;
    using namespace second;
    // std::cout << second::x;
    std::cout << x;

    return 0;
}