#include<iostream>

class animal{
    public:

    std::string name;
    bool alive  = true;

    void print(){
        std::cout << "name is  " <<this->name <<"\n";
        std::cout << " is alive or not  " << this->alive <<"\n";
    }
};

class dog : public animal{
    public:
     void bark(){
        std::cout << "the dog is barking \n";
     }
};

class cat : public animal{
    public:
    void meow(){
        std::cout << " the cat is meowing \n";
    }
};

int main(){

    animal animals;
    dog dog1;
    cat cat1;
    animals.name = "aanniimmaallss";
    dog1.name = "dog1";
    cat1.name = "cat1";
    
    animals.print();
    dog1.print();
    cat1.print();

    dog1.bark();
    cat1.meow();


    return 0;
}