#include <iostream>
#include <string>

using namespace std;

class Hero
{
public:
    string name;

public:
    Hero(const char *name)
    {
        this->name = name;
    }

    // setter
    void setName(const char* name) {
        this->name = name;
    }

    // getter
    string getName() const {
        return this->name;
    }

    // void setName(const char* name) const {
    //     this->name = name;
    // }

    void display() const{
        cout << "Name : " << this->name << endl;
    }
};

int main(int argc, char const *argv[])
{
    Hero hero1 = Hero("otong");
    const Hero hero2 = Hero("Ucup");
    hero1.display();
    hero1.name = "Mario";
    hero1.display();
    hero1.setName("Saitama");
    hero1.display();

    hero2.display();    
    // hero2.name = "Mario";
    hero2.display();
    // hero2.setName("Mario");
    hero2.display();
    cout << hero2.getName() << endl;
    return 0;
}