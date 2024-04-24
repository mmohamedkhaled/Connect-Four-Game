#include "Player.h"

Player::Player() : name(""), symbol("") {}

Player::Player(const std::string& Name, const std::string& Symbol) : name(Name), symbol(Symbol) {}

void Player::setName(const std::string& newName) {
    name = newName;
}

void Player::setSymbol(const std::string& newSymbol) {
    symbol = newSymbol;
}

std::string Player::getName() const {
    return name;
}

std::string Player::getSymbol() const {
    return symbol;
}

std::ostream& operator<<(std::ostream& os, const Player& player) {
    os << "Name: " << player.name << ", Symbol: " << player.symbol;
    return os;
}
