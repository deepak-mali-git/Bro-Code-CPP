#include<iostream>


int main(){

    // dynamic  memory = memory that is allocated after the program is already compiled & running. use the new 'new' operator to allocate memory in the heap rather than the stack;

    // Use full when we don't know how much memory we will nedd. Makes our programs more flexible, especially when accepting user input.

    int *pint = new int[10];

    for (int i = 0; i < 10; i++)
    {
        std::cin >> pint[i];
    }
    std::cout << "\n\n";

    delete[] pint;

    for (int i = 0; i < 10; i++)
    {
        std::cout << pint[i];
    }

    std::cout << '\n' << pint;
    

    return 0;
}