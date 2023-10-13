#include<iostream>

class car{
    private:
    std::string name;
    std::string model;
    int petrolCap;
    bool isSport; 

    public:

    car(std::string name, std::string model, int d , bool dd){
        setcar(name,model,d,dd);
    }

    void accelerate(){
        std::cout << "you step on the gas \n";
    }
    void brake(){
        std::cout << "you want to stop car \n";
    }
    void setcar(std::string name, std::string model, int d , bool dd){
        this->name = name;
        this->model = model;
        petrolCap = d;
        isSport = dd;
    }
    void print(){

        std::cout << this->name << '\n';
        std::cout << this->model << '\n';
        std::cout << this->petrolCap << '\n';
        std::cout << this->isSport << '\n';

    }
};

int main(){

    // object = a collection of attributes and methods created from class which act  like an blue print

    // constructor - special method that is automaticaly called or invoke when a object is created;

    // geter and seter function
    car c1("rang rover", "new" , 40, false);
    car c2("land rover", "very new" , 20, true);
    car c3("ferari", "new" , 23, true);
    c1.print();
    c2.print();
    c3.print();

    return 0;
}