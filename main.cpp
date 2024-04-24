#include <iostream>
#include "ConnectFourGame.h"
#include "Player.h" // Include Player header

int main() {
    ConnectFourGame connect;

    Player player1, player2;
    std::string player1name, player2name;
    int cols;
    bool check = false;

    std::cout << "Enter player 1's name: ";
    std::cin >> player1name;
    player1.setName(player1name);
    player1.setSymbol("red");
    std::cout << "Your symbol is: " << player1.getSymbol() << std::endl;

    std::cout << "Enter player 2's name: ";
    std::cin >> player2name;
    player2.setName(player2name);
    player2.setSymbol("blue");
    std::cout << "Your symbol is: " << player2.getSymbol() << std::endl;

    connect.setPlayers(player1, player2);

    std::cout << "It's " << connect.getCurrentPlayer().getName() << "'s turn\n";

    while (!check) {
        std::cout << "Enter the column (0-6) to make a move: ";
        std::cin >> cols;
        connect.makeMove1(cols);
        connect.print();

        if (connect.isGameOver()) {
            check = true;
            connect.reset();
        } else {
            std::cout << "Enter the column (0-6) to make a move: ";
            std::cin >> cols;
            connect.makeMove1(cols);
            connect.print();

            if (connect.isGameOver()) {
                check = true;
                connect.reset();
            }
        }
    }

    return 0;
}
