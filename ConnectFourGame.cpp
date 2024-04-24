#include "ConnectFourGame.h"

ConnectFourGame::ConnectFourGame() : BoardGame(6, 7) {}

bool ConnectFourGame::validateCols(int cols) {
    return cols >= 0 && cols < 7;
}

void ConnectFourGame::makeMove1(int cols) {
    if (validateCols(cols)) {
        order();
        for (int i = 5; i >= 0; i--) {
            if (game[i][cols] == " ") {
                game[i][cols] = move;
                break;
            }
        }
    } else {
        std::cout << "Unavailable placement\n";
    }
}

bool ConnectFourGame::isGameOver() {
    // Check for horizontal wins
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 4; j++) {
            if (game[i][j] != " " && game[i][j] == game[i][j + 1] &&
                game[i][j] == game[i][j + 2] && game[i][j] == game[i][j + 3]) {
                if (game[i][j] == "red") {
                    std::cout << player1.getName() << " won\n";
                } else if (game[i][j] == "blu") {
                    std::cout << player2.getName() << " won\n";
                }
                return true;
            }
        }
    }

    // Check for vertical wins
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 7; j++) {
            if (game[i][j] != " " && game[i][j] == game[i + 1][j] &&
                game[i][j] == game[i + 2][j] && game[i][j] == game[i + 3][j]) {
                if (game[i][j] == "red") {
                    std::cout << player1.getName() << " won\n";
                } else if (game[i][j] == "blu") {
                    std::cout << player2.getName() << " won\n";
                }
                return true;
            }
        }
    }

    // Check for diagonal wins (bottom-left to top-right)
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (game[i][j] != " " && game[i][j] == game[i + 1][j + 1] &&
                game[i][j] == game[i + 2][j + 2] && game[i][j] == game[i + 3][j + 3]) {
                if (game[i][j] == "red") {
                    std::cout << player1.getName() << " won\n";
                } else if (game[i][j] == "blu") {
                    std::cout << player2.getName() << " won\n";
                }
                return true;
            }
        }
    }

    // Check for diagonal wins (bottom-right to top-left)
    for (int i = 0; i < 3; i++) {
        for (int j = 3; j < 7; j++) {
            if (game[i][j] != " " && game[i][j] == game[i + 1][j - 1] &&
                game[i][j] == game[i + 2][j - 2] && game[i][j] == game[i + 3][j - 3]) {
                if (game[i][j] == "red") {
                    std::cout << player1.getName() << " won\n";
                } else if (game[i][j] == "blu") {
                    std::cout << player2.getName() << " won\n";
                }
                return true;
            }
        }
    }

    // Check for a draw
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 7; j++) {
            if (game[i][j] == " ") {
                return false; // Game not over yet
            }
        }
    }

    std::cout << "It's a draw!\n";
    return true;
}
