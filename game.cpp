#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::cout << "Welcome to the Number Guessing Game!\n";
    std::cout << "I'm thinking of a number between 1 and 100.\n";
    std::cout << "Please select the difficulty level:\n";
    std::cout << "1. Easy (10 chances)\n2. Medium (5 chances)\n3. Hard (3 chances)\n";
    
    
    int difficulty, attempts;
    std::cin >> difficulty;
    switch (difficulty) {
        case 1: attempts = 10; break;
        case 2: attempts = 5; break;
        case 3: attempts = 3; break;
        default: attempts = 5; std::cout << "Invalid choice. Defaulting to Medium.\n";
    }

   
    std::srand(std::time(0)); 
    int target = std::rand() % 100 + 1;

   
    int guess;
    int attemptsUsed = 0;
    while (attempts > 0) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attemptsUsed++;

        if (guess == target) {
            std::cout << "Congratulations! You guessed the correct number in " << attemptsUsed << " attempts.\n";
            break;
        } else if (guess > target) {
            std::cout << "Incorrect! The number is less than " << guess << ".\n";
        } else {
            std::cout << "Incorrect! The number is greater than " << guess << ".\n";
        }

        attempts--;

        if (attempts == 0) {
            std::cout << "You've run out of attempts! The correct number was " << target << ".\n";
        }
    }

    return 0;
}
