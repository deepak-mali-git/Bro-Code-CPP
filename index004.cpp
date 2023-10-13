#include<iostream>

// type conversation implicit/explicit

int main(){

    double x = (int) 3.14;
    int correct = 9;
    int questions = 10;

    double score = ((correct /(double) questions) * 100);

    std::cout << x << std::endl; 
    std::cout << score;

    return 0;
}