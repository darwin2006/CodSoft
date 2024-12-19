#include <iostream>
using namespace std;

char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
char currentPlayer = 'X';
int choice;
bool gameOver = false;
void displayBoard() {
    cout << "\nTic-Tac-Toe Board\n";
    cout << "Player X and Player O\n";
    cout << "Current Board:\n";
    cout << "-------------\n";
    for (int i = 0; i < 3; i++) {
        cout << "| " << board[i][0] << " | " << board[i][1] << " | " << board[i][2] << " |\n";
        cout << "-------------\n";
    }
}
bool checkWin() {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
            return true;
        }
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
            return true;
        }
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        return true;
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        return true;
    }
    return false;
}
bool checkDraw() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != 'X' && board[i][j] != 'O') {
                return false;
            }
        }
    }
    return true;
}

void playerMove() {
    cout << "Player " << currentPlayer << ", enter a number (1-9): ";
    cin >> choice;
    if (choice >= 1 && choice <= 9) {
        int row = (choice - 1) / 3;
        int col = (choice - 1) % 3;
        if (board[row][col] != 'X' && board[row][col] != 'O') {
            board[row][col] = currentPlayer;
        } else {
            cout << "That spot is already taken. Try again.\n";
            playerMove();
        }
    } else {
        cout << "Invalid move. Please enter a number between 1 and 9.\n";
        playerMove();
    }
}
void switchPlayer() {
    if (currentPlayer == 'X') {
        currentPlayer = 'O';
    } else {
        currentPlayer = 'X';
    }
}

int main() {
    while (!gameOver) {
        displayBoard();
        playerMove();
        if (checkWin()) {
            displayBoard();
            cout << "Player " << currentPlayer << " wins!\n";
            gameOver = true;
        }
        else if (checkDraw()) {
            displayBoard();
            cout << "It's a draw!\n";
            gameOver = true;
        }
        switchPlayer();
    }

    char playAgain;
    cout << "Do you want to play again? (yes/no): ";
    cin >> playAgain;
    if (playAgain == 'y' || playAgain == 'Y') {
        board[0][0] = '1'; board[0][1] = '2'; board[0][2] = '3';
        board[1][0] = '4'; board[1][1] = '5'; board[1][2] = '6';
        board[2][0] = '7'; board[2][1] = '8'; board[2][2] = '9';
        currentPlayer = 'X';
        gameOver = false;
        main();
    } else {
        cout <<"Thank you for playing!!"<<endl;
    }
    return 0;
}

