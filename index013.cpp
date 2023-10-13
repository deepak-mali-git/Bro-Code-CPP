#include<iostream>


int main(){

    int  array[100];
    int size = sizeof(array)/4;
    std::fill(array, array +  size/2, 1);
    
     // note that this start and end values in form of a addres other wise it will not work

    std::fill(array + 50, array + size, 2);

    for(int temp : array)
    std::cout << temp << "\n";

    return 0;
}