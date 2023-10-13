#include<iostream>
#include<limits>
#include<ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){

    char player;
    char computer;
    
    player =  getUserChoice();
    std::cout << "you choice: ";
    showChoice(player);

    computer = getComputerChoice();
    std:: cout << "computer's choice: ";
    showChoice(computer);
    chooseWinner(player,computer);

    return 0;
}




char getUserChoice(){
    char player;
    std::cout << "ROck-Paper-Scissors Game\n";
    do{
    std::cout << "CHOOSE ONE OF THE FOLLOWING\n";
    std:: cout << "************************\n";
    std::cout << "'r' for Rock\n";
    std::cout << "'p' for Paper\n";
    std::cout << "'s' for Scissore\n";
    std::cin >> player;

    std::cin.clear(); 
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

    }while (player != 'r' && player != 'p' && player != 's');
    

    return player;
   
}
char getComputerChoice(){
    srand(time(0));
    int num = rand() % 3 + 1;
    switch ((num))
    {
    case 1: return 'r';
    case 2: return 'p';
    case 3: return 's';
    default:
        break;
    }
    return 0;
}
void showChoice(char choice){
    switch (choice)
    {
    case 'r': std::cout << "Rock\n";
        break;

    case 'p': std::cout << "Paper\n";
        break;

    case 's': std::cout << "Scissors\n";
        break;
    
    default:
        break;
    }
}
void chooseWinner(char player, char computer){
    switch (player)
    {
    case 'r': if(computer == 'r'){
        std::cout << "It's a tie\n";
    }

    else if(computer == 'p'){
        std::cout << "You lose\n";
    }

    else {
        std::cout << "You win\n";
    }
        break;
    
    
    case 'p': if(computer == 'p'){
        std::cout << "It's a tie\n";
    }

    else if(computer == 's'){
        std::cout << "You lose\n";
    }

    else {
        std::cout << "You win\n";
    }
        break;
    
    case 's': if(computer == 's'){
        std::cout << "It's a tie\n";
    }

    else if(computer == 'r'){
        std::cout << "You lose\n";
    }

    else {
        std::cout << "You win\n";
    }
        break;
    

    default:
        break;
    }
}