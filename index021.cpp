#include<iostream>

enum Day{sun = 0, mon = 1, tue = 2, wed = 3 ,thu = 4 ,fri =5 ,sat = 6};
//if you not specify number then it will automaticaly enesilize following data starting 0 to n number

int main(){

    // en;ums = a user defined data type taat consists of paired named integer constants.

    Day today = sat; 
    switch(today){
    // case sun: std::cout << "sunday";
    //     break;

    // case sat: std::cout << "saturday";
    //     break;
    
    case 0: std::cout << "sunday";
        break;

    case 6: std::cout << "saturday";
        break;
    
    
    default:
        break;
    }
    return 0;
}