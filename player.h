#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

class Player {
private:
    std::string name;
    std::string symbol;

public:
    Player();
    Player(const std::string& Name, const std::string& Symbol);

    void setName(const std::string& newName);
    void setSymbol(const std::string& newSymbol);
    std::string getName() const;
    std::string getSymbol() const;

    friend std::ostream& operator<<(std::ostream& os, const Player& player);
};

#endif // PLAYER_H
