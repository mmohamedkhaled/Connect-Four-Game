#ifndef BOARDGAME_H
#define BOARDGAME_H

#include <iostream>
#include <vector>
#include "Player.h"

class BoardGame {
protected:
    std::vector<std::vector<std::string>> game;
    int rows;
    int cols;

public:
    Player player1;
    Player player2;
    int playerm;
    std::string move;

    BoardGame();
    BoardGame(int r, int c);

    void setPlayerM(int p);
    void setMove(const std::string& m);
    int getPlayerM() const;
    void reset();
    void reset1();
    void order();
    void print1();
    void print();
    bool validatePlace(int rows, int cols);
    void makeMove(int rows, int cols);
    virtual bool isGameOver() = 0;
};

#endif // BOARDGAME_H
