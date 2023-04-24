#include <iostream>
#include <string>

// external definition
#include "Player.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Player* playerObject = new Player("Soka");
    playerObject->display();

    cout << "get name: " << playerObject->getName() << endl;
    cout << "rubah nama" << endl;
    playerObject->setName("Kacung");
    playerObject->display();
    return 0;
}