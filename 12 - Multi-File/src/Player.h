#ifndef __PLAYER
#define __PLAYER
#include <string>
// deklarasi class

class Player
{
public:
    std::string name;

    // constructor
    Player(const char*); // dalam bentuk prototype
    void display();
    std::string getName();
    void setName(const char*);
};

#endif