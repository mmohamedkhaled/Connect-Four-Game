#include "BoardGame.h"

BoardGame::BoardGame() : rows(0), cols(0), playerm(0), move("X") {}

BoardGame::BoardGame(int r, int c) : rows(r), cols(c), playerm(0) {
    game.resize(r, std::vector<std::string>(c, " "));
    move = (rows < 4) ? "X" : "red";
}

void BoardGame::setPlayerM(int p) {
    playerm = p;
}

void BoardGame::setMove(const std::string& m) {
    move = m;
}

int BoardGame::getPlayerM() const {
    return playerm;
}

void BoardGame::reset() {
    for (auto& row : game) {
        for (auto& col : row) {
            col = " ";
        }
    }
}

void BoardGame::reset1() {
    for (auto& row : game) {
        for (auto& col : row) {
            col = " ";
        }
    }
}

void BoardGame::order() {
    if (getPlayerM() != 1 && getPlayerM() != 2) {
        setPlayerM(1);
        std::cout << "It is " << player2.getName() << "'s turn\n";
    } else if (getPlayerM() == 1) {
        setPlayerM(2);
        std::cout << "It is " << player1.getName() << "'s turn\n";
        setMove((move == "X") ? "O" : "blu");
    } else if (getPlayerM() == 2) {
        setPlayerM(1);
        std::cout << "It is " << player2.getName() << "'s turn\n";
        setMove((move == "O") ? "X" : "red");
    }
}

void BoardGame::print1() {
    for (const auto& row : game) {
        for (const auto& col : row) {
            std::cout << col << " ";
        }
        std::cout << std::endl;
    }
}

void BoardGame::print() {
    for (const auto& row : game) {
        for (const auto& col : row) {
            std::cout << col << " ";
        }
        std::cout << std::endl;
    }
}

bool BoardGame::validatePlace(int rows, int cols) {
    return (rows < game.size() && cols < game[0].size() && game[rows][cols] == " ");
}

void BoardGame::makeMove(int rows, int cols) {
    if (validatePlace(rows, cols)) {
        order();
        game[rows][cols] = move;
    } else {
        std::cout << "Unavailable placement\n";
    }
}
