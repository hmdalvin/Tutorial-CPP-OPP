#include <iostream>
#include <string>

#include "Player.hpp"
#include "Weapon.hpp"
using namespace std;

int main(int argc, char const *argv[])
{
    Player* player1 = new Player("Sniper");
    Weapon* weapon1 = new Weapon("senapan", 50);

    // implementasi setter untuk mengequip weapon
    player1->equipWeapon(weapon1);

    player1->display();

    return 0;
}