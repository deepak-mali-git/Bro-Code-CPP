#include<iostream>

template <typename T, typename U>
auto max(T x, U y){
    return (x>y)?x:y;
}

int main(){

    //function template = describe what a function looks like.
    std::cout << max(601,599.01);

    return 0;
}