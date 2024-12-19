#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
srand(static_cast<unsigned int>(time(0)));
int randomNumber = rand() % 100 + 1;
int userGuess;
int attempts = 0;
cout << "Number guessing Game!" << endl;
cout << "Guess the number between 1 to 100" << endl;
cout << "Happy Playing" << endl;
do {
cout << "Enter your guess: ";
cin >> userGuess;
attempts++;
if (userGuess > randomNumber) {
cout << "Too high! Try again." << endl;
} else if (userGuess < randomNumber) {
cout << "Too low! Try again." << endl;
} else {
cout << "Congratulations! You made it " << randomNumber << endl;
cout << "It took you " << attempts << " attempts to guess the correct number." << endl;
}
} while (userGuess != randomNumber);
return 0;
}
