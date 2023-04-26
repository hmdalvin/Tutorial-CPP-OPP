#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(const char *name, double attackPower)
{
    this->name = name;
    this->attackPower = attackPower;
}

void Weapon::display()
{
    std::cout << "Weapon ini adalah " << this->name << " power = ";
    std::cout << this->attackPower << std::endl;
}

std::string Weapon::getName()
{
    return this->name;
}