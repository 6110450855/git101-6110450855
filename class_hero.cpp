#include <iostream>
#include <string>
using namespace std ;

class Hero
{
private:
    string name ;
    int level ;
public:
    Hero(string hero_name,int hero_level)
    {
        this->name = hero_name ;
        this->level = hero_level ;
    }

    string getName()
    {
        return this->name ;
    }

    int getLevel()
    {
        return this->level ;
    }
};