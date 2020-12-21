#include <iostream> 
#include <time.h> //included to randomize seed for random number generation
#include <stdlib.h> // Expands function list to include srand and rand
 
// Rock Paper Scissors game, thoughts at bottom

int userScore = 0, compScore = 0, Round = 0; // Initialize variables
char playAnswer, answer, compAnswer;

int main()
{
    std::cout << "\nThe Rules: Rock beats Scissors, Scissors beat Paper and Paper beats Rock.\n";
    std::cout << "Do you want to play?(Y/N) ";
    std::cin >> playAnswer;

    if (playAnswer == 'Y')
    {
        while (Round < 10)
        {
            std::cout << "\nRock, Paper, Scissors?(R/P/S) ";
            std::cin >> answer;

            srand(time(NULL)); // randomizes seed of rnumber generator
            compAnswer = rand() %3; //randomly generates a number between 0-2
            if (compAnswer == 0)
            {
                std::cout << "Computer chooses Rock!\n";
            }
            else if (compAnswer == 1)
            {
                std::cout << "Computer chooses Paper!\n";
            }
            else 
            {
                std::cout << "Computer chooses Scissors!\n";
            }


            if (answer== 'R' && compAnswer == 0 || answer == 'P' && compAnswer == 1 || answer=='S' && compAnswer == 2)
            {  
                std::cout << "\nTie!\n";
                Round++;
            }
            else if (answer == 'R' && compAnswer == 1 || answer == 'P' && compAnswer == 2 || answer == 'S' && compAnswer == 0)
            {
                std::cout << "\nComputer Wins!\n";
                compScore++;
            }
            else 
            {
                std::cout << "\nWinner!\n";
                userScore++;
            }

            Round++;
            std::cout << "Round " << Round << " Over!\n"; // Prints end of round a current scores.
            std::cout << "Your Score: " << userScore << " \n";
            std::cout << "Computer Score: " << compScore << "\n";

        }

    }

    return 0;
}

/* This took me approx 4 hours, most of that time was spent trying to use an array to store the computer's choice options
 and then trying to compare them with the user options to determine a winner.

In the end I decided to just ditch the array system and build several If/Else statements
because I could not get the program to function the way I wanted. After switching to IF/Else statements I also deicded to add Rounds and Scores
to practice implementing For and While loops. 

This program development taught me that arrays and strings are useful but sometimes not what the program requires. I also learned that you can store
characters other than numbers in a variable if you use ' ' marks around said characters. This might require using a different variable type
when initializing, but didn't cause a problem once the program was running. */