#ifndef CONNECTFOURGAME_H
#define CONNECTFOURGAME_H

#include "BoardGame.h"

class ConnectFourGame : public BoardGame {
public:
    ConnectFourGame();

    bool validateCols(int cols);
    void makeMove1(int cols);
    bool isGameOver() override;
};

#endif // CONNECTFOURGAME_H
