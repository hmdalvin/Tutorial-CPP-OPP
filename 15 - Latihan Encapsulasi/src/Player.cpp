#include "Player.hpp"

#include <iostream>

Player::Player(const char* name)
{
    this->name = name;
}

void Player::display()
{
    std::cout << "Player ini adalah " << this->name << std::endl;
    std::cout << "Menggunakan senjata: " << this->weapon->getName();
}

void Player::equipWeapon(Weapon* weapon)
{
    this->weapon = weapon;
}