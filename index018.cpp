#include<iostream>
int factorial(int);

int main(){

    //recursion = a programing technique where a function invokes itself from within break a complex concept into a repeatable single step;
    // (iterative vs recursive)

    //div adv use for memory and very slow;

    // When a program attempts to use more space than is avaliable on the cll stack (the stack is said to overflow) , typically resulting in a program crash; 

    std::cout << factorial(5);

    return 0;
}

int factorial(int num){
    
    if(num > 1){
        return num * factorial(num -1);
    }

    else 
    return 1;
}