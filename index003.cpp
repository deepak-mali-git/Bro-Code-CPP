#include<iostream>

// typedef = reserved keyword used to create an additional name (alias) for another data type.
// New identifier for an existing type help with readability and reduces typos

typedef std::string text_t;

int main(){

    text_t name;
    name = "Bro Code";

    std:: cout << name;

return 0;
}
