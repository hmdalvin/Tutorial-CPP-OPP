#include <iostream>
#include <string>

using namespace std;

class Hero
{
private:
    string name;
    double health;
    double power;

public:
    // dengan default assigment
    Hero(const char *name = "Player", double health = 125.5, double power = 100)
    {
        this->name = name;
        this->health = health;
        this->power = power;
    }

    void display()
    {
        cout << "\nPlayer name = " << this->name << endl;
        cout << "Health = " << this->health << endl;
        cout << "Power = " << this->power << endl;
    }
};

int main(int argc, char const *argv[])
{
    Hero *hero1 = new Hero("Ucup", 125); // di heap
    hero1->display();

    Hero hero2 = Hero(); // di stack
    hero2.display();

    Hero *hero3 = new Hero("Otong");
    hero3->display();

    Hero* hero4 = new Hero("Maman", 100, 150);
    hero4->display();
    return 0;
}