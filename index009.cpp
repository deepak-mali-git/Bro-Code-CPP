#include<iostream>
#include<iomanip>
#include <limits>
using namespace std;

void space();
void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){
    double balance = 123;
    int choice = 0;

    do
    {
      space();
    cout << "****************** \n";
    cout << "enter your choice \n";
    cout << "********************\n";
    cout << "1. show Balance \n";
    cout << "2. Deposit money \n";
    cout << "3. withdraw Money \n";
    cout << "4. exit \n";
    cin >> choice;
    space();

    cin.clear();    // reset error flag
    // fflush(stdin);  // not sugested for use
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // clear input buffer max size 
    fflush(stdout); // clear output buffer

// 
    switch (choice)
    {
    case 1: 
        showBalance(balance);
        break;

    case 2: balance += deposit();
        showBalance(balance);
        break;

    case 3: balance -= withdraw(balance);
        showBalance(balance);
        break;

    case 4: 
    cout << "\n\n ####### thanks for visiting \n";
    break;
    
    default:
    cout << " \n\n ############ invalid choice \n\n\n";
        break;
    }

    } while (choice != 4);
    



    return 0;
}

void space(){
    cout << "\n\n";
}

void showBalance(double balance){
    cout  << "your balance is : $" << setprecision(2) << fixed << balance << endl;
}

double deposit(){
    double amount = 0;
    cout << "enter amount to be deposit: ";
    cin >> amount;
    
    if(amount > 0){
        return amount; 
    }
    else{
        cout << "nto a valid amount \n";
        return 0;
    }
}
double withdraw(double balance){

    double amount = 0;
    cout << "enter amount to be withdraw \n";
    cin >> amount;

    if(amount > balance || amount < 1){
        cout << " enter valid amount \n";
        return 0;
    }
    else{
        return amount; 
    }

}