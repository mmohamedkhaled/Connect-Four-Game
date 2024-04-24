# Connect Four Game

This is a simple implementation of the Connect Four game in C++. Players take turns dropping colored discs into a vertical grid, aiming to connect four discs of their color in a row, column, or diagonal to win the game.

## Features

- Two players take turns dropping discs of their respective colors.
- The game board is displayed after each move.
- Checks for win conditions and announces the winner.
- Handles draws when the board is full.

## Usage

1. Compile the code using a C++ compiler.
2. Run the compiled executable.
3. Enter player names and take turns dropping discs into columns.
4. The game announces the winner or declares a draw when applicable.

## File Structure

- `main.cpp`: Contains the main game loop and user interactions.
- `ConnectFourGame.h` and `ConnectFourGame.cpp`: Classes and methods for the Connect Four game logic.
- `Board.h` and `Board.cpp`: Classes and methods for the game board.
- `Player.h` and `Player.cpp`: Classes and methods to handle player information.

## How to Run

Compile the code using a C++ compiler such as g++:

```bash
g++ main.cpp ConnectFourGame.cpp Board.cpp Player.cpp -o ConnectFour
./ConnectFour
