#include<iostream>
#include<limits>


int main(){

    std::string questions[] = {"1.What year was C++ created?: ",
                               "2. Who inveted c++ ?",
                               "3. What is the predecessor of ? ",
                               "4. is the Earth flat? "};

    std::string options[][4] = {{"A. 1969", "B. 1975", "C 1985", "D. 1989"},
    {"A. Guido van Rossum","B. Bjarne Stroustrup","C. John Carmack","D. Mark zukerburg"},
    {"A. C","B. C+","C. C--","D. B++"},
    {"A. yes","B. no","C. sometimes","D. what's earth"},
    };

    char answerKey[] = {'C','B','A','B'};

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score = 0;

    for(int i = 0; i < size; i++){
        std::cout << "*********************\n";
        std::cout << questions[i] << "\n";
        std::cout << "**********************\n";

        for(int j = 0 ; j < sizeof(options[i])/sizeof(options[i][0]); j++){
            std::cout << options[i][j] << "\n";
        }

        std::cin >> guess;

        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        guess = toupper(guess);
         if(guess == answerKey[i])
            {
                std::cout << "CORRECT\n";
            score++;
            }
      
         else{
            std::cout << "WRONG\n";
            std::cout << "Answer: " << answerKey[i] << "\n";
         }
    }

         std::cout << "*********************\n";
         std::cout << "          RESULT          \n";
         std::cout << "**********************\n";
         std::cout << "CORRECT GUESSES: " << score << "\n";
         std::cout << "# of QUESITONS " << size << '\n';
         std::cout << "SCORE: " << (score/(double)size)*100 << "%";


    return 0;
}