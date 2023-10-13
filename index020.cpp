#include<iostream>

struct student{
    std::string name;
    double gpa;
    bool enrolled;
};

int main(){

    // struct = a structure that group related variable under one name structure can contain many data types;
    // members can be access with . "class member access operator"

    student st1;
    st1.name = "deepak";
    std::cout << st1.name;

    return 0;
}