#include<iostream>
#include<ctime>

int main(){

    srand(time(NULL));

    int num = rand() % 6;
    num++;

    std::cout << num;


    return 0;
}